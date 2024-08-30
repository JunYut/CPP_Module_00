# include "PhoneBook.hpp"

using std::cout;
using std::endl;

void	PhoneBook::add_contact(const Contact& contact)
{
	for (int i = 0; i < 8; i++)
	{
		if (arr[i].first_name().empty() == true)
		{
			arr[i].first_name(contact.first_name());
			arr[i].last_name(contact.last_name());
			arr[i].nickname(contact.last_name());
			arr[i].phone_number(contact.phone_number());
			arr[i].darkest_secret(contact.darkest_secret());
			break;
		}
	}
}

Contact	PhoneBook::get_contact(int index) const
{
	if (index < 0 || index >= 8)
	{
		cout << index << ": Invalid index" << endl;
		return (Contact());
	}
	return (this->arr[index]);
}
