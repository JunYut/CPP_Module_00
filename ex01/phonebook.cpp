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
	cout << setw(10) << right << truncate("Index|", 10) + '|';
	cout << setw(10) << right << truncate("First Name|", 10) + '|';
	cout << setw(10) << right << truncate("Last Name|", 10) + '|';
	cout << setw(10) << right << truncate("Nickname", 10) << endl;
	return (0);
}

string	truncate(const string& str, size_t width)
{
	if (str.length() > width)
		return (str.substr(0, width - 1) + '.');
	return (str);
}
