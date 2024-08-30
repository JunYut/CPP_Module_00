# include "PhoneBook.hpp"
# include <iostream>

using std::cout;
using std::endl;

int	main(void)
{
	PhoneBook	phonebook;

	cout << '[' << phonebook.get_contact(-1).first_name() << ']' << endl;

	return 0;
}
