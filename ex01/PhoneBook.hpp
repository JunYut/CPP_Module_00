# pragma once
# ifndef __PHONEBOOK_H__
	# define __PHONEBOOK_H__

	# include "Contact.hpp"
	# include <string>
	# include <iostream>

	class PhoneBook
	{
		private:
			Contact	arr[8];

		public:
			void	add_contact(const Contact& contact);
			Contact	get_contact(int index) const;
	};

# endif
