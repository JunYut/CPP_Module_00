# include "phonebook.hpp"
# include <iostream>

using std::cout;
using std::endl;

int	main(void)
{
	PhoneBook	pb;
	Contact		contact;

	contact.first_name("John");
	contact.last_name("Doets");
	contact.nickname("Little Doe");
	pb.add_contact(contact);

	display(pb);
	return 0;
}
