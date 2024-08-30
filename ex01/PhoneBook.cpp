# include "PhoneBook.hpp"

using std::cout;
using std::endl;

void	PhoneBook::add_contact(const Contact& contact)
{
	(void)contact;
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
