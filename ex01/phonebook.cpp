# include "phonebook.hpp"

using std::setw;
using std::right;
using std::cout;
using std::endl;
using std::string;

int	add(PhoneBook& pb)
{
	(void)pb;
	return (0);
}

int	search(const PhoneBook& pb)
{
	display(pb);
	return (0);
}

void	exit(void)
{
	return ;
}

int	display(const PhoneBook& pb)
{
	Contact 			curr;
	std::stringstream	ss;

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
	return (0);
}

int	format_field(const std::string& field)
{
	cout << setw(10) << right << truncate(field, 10);
	return (0);
}

string	truncate(const string& str, size_t width)
{
	if (str.length() > width)
		return (str.substr(0, width - 1) + '.');
	return (str);
}
