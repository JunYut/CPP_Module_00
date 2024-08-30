# include "PhoneBook.hpp"
# include <iostream>

using std::cout;
using std::endl;

int	main(void)
{
	PhoneBook	phonebook;
	Contact		contact;

	contact.first_name("John");
	cout << '[' << phonebook.get_contact(0).first_name() << ']' << endl;
	phonebook.add_contact(contact);
	cout << '[' << phonebook.get_contact(0).first_name() << ']' << endl;

	contact.first_name("Atlas");
	cout << '[' << phonebook.get_contact(1).first_name() << ']' << endl;
	phonebook.add_contact(contact);
	cout << '[' << phonebook.get_contact(1).first_name() << ']' << endl;

	return 0;
}
