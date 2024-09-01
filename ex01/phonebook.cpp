# include "phonebook.hpp"

using std::setw;
using std::right;
using std::cin;
using std::cout;
using std::endl;
using std::stringstream;
using std::string;

int	add(PhoneBook& pb)
{
	(void)pb;
	return (1);
}

int	search(const PhoneBook& pb)
{
	display_contact(pb);
	search_prompt();
	return (1);
}

void	exit(void)
{
	return ;
}

int	display_ent(const PhoneBook& pb, int index)
{
	Contact	contact;

	if (index < 0 || index >= 8)
	{
		cout << "Invalid index: out of bounds" << endl;
		return (0);
	}
	contact = pb.get_contact(index);
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

	cout << "Enter entry index to display: ";
	cin >> input;
	if (input.empty())
	{
		cout << "Invalid input: empty string" << endl;
		return (0);
	}
	return (1);
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
