# include "phonebook.hpp"

using std::setw;
using std::right;
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::exception;
using std::stringstream;
using std::string;

int	add(PhoneBook& pb)
{
	Contact	contact;
	string	input;

	input = add_prompt("Enter first name");
	contact.first_name(input);
	input = add_prompt("Enter last name");
	contact.last_name(input);
	input = add_prompt("Enter nickname");
	contact.nickname(input);
	input = add_prompt("Enter phone number");
	contact.phone_number(input);
	input = add_prompt("Enter darkest secret");
	contact.darkest_secret(input);
	pb.add_contact(contact);
	return (1);
}

int	search(const PhoneBook& pb)
{
	display_contact(pb);
	display_ent(pb, search_prompt() - 1);
	return (1);
}

void	exit(void)
{
	std::exit(0);
	return ;
}

string add_prompt(const string& prompt)
{
    string input;

    while (true)
    {
        cout << prompt + ": ";
        if (!(cin >> input)) // Check if std::cin is in a fail state
        {
            if (cin.eof()) // Check if the fail state is due to EOF
            {
                cerr << "EOF received. Exiting input loop.\n";
                std::exit(0); // Exit the program or handle as needed
            }
            else
            {
                cerr << "Input error. Please try again.\n";
                cin.clear(); // Clear the fail state
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the rest of the line
                continue;
            }
        }
        if (input.empty())
        {
            cerr << "Invalid input: empty string\n";
            continue;
        }
        if (prompt == "Enter phone number" && input.size() != 11)
        {
            cerr << "Invalid input: phone no. must be 11 digits\n";
            continue;
        }
        break;
    }
    return input;
}

int	display_ent(const PhoneBook& pb, int index)
{
	Contact	contact;

	if (index < 0 || index >= 8)
	{
		cerr << "Invalid index: out of bounds" << endl;
		return (0);
	}
	contact = pb.get_contact(index);
	if (contact.first_name().empty())
	{
		cout << index + 1 << ": empty entry\n";
		return (1);
	}
	cout << "First Name    : " + contact.first_name() << endl;
	cout << "Last Name     : " + contact.last_name() << endl;
	cout << "Nickname      : " + contact.nickname() << endl;
	cout << "Phone Number  : " + contact.phone_number() << endl;
	cout << "Darkest Secret: " + contact.darkest_secret() << endl;
	return (1);
}

int	search_prompt(void)
{
	string	input;
	int		index;

	while (true)
	{
		cout << "Enter entry index to display: ";
		cin >> input;
		if (input == "EXIT")
			exit();
		try
		{
			index = stoi(input);
			break;
		}
		catch (const exception& e)
		{
			cerr << "Invalid input: [" + input + "]: " << e.what() << '\n';
		}
	}
	return (index);
}

int	display_contact(const PhoneBook& pb)
{
	Contact 		curr;
	stringstream	ss;

	format_field("Index");		cout << '|';
	format_field("First Name");	cout << '|';
	format_field("Last Name");	cout << '|';
	format_field("Nickname");	cout << endl;
	for (size_t i = 0; i < 8; i++)
	{
		curr = pb.get_contact(i);
		if (!curr.first_name().empty())
		{
			ss.str("");
			ss.clear();
			ss << i + 1;
			format_field(ss.str());			cout << '|';
			format_field(curr.first_name());	cout << '|';
			format_field(curr.last_name());	cout << '|';
			format_field(curr.nickname());	cout << endl;
		}
	}
	return (1);
}

int	format_field(const std::string& field)
{
	cout << setw(10) << right << truncate(field, 10);
	return (1);
}

string	truncate(const string& str, size_t width)
{
	if (str.length() > width)
		return (str.substr(0, width - 1) + '.');
	return (str);
}

int	stoi(const string& str)
{
	stringstream	ss(str);
	int				num;

	if (!(ss >> num) || !(ss.eof()))
		throw (std::invalid_argument("not a number"));
	if (num < 1 || num > 8)
		throw (std::out_of_range("out of range"));
	return (num);
}
