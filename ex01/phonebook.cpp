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
	(void)pb;
	format_field("Index");		cout << '|';
	format_field("First Name");	cout << '|';
	format_field("Last Name");	cout << '|';
	format_field("Nickname");		cout << endl;
	return (0);
}

int	format_field(const std::string& unit)
{
	cout << setw(10) << right << truncate(unit, 10);
	return (0);
}

string	truncate(const string& str, size_t width)
{
	if (str.length() > width)
		return (str.substr(0, width - 1) + '.');
	return (str);
}
