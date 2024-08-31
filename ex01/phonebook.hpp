# pragma once
# ifndef __PHONEBOOK_H__
	# define __PHONEBOOK_H__

	# include "PhoneBook.hpp"
	# include <string>
	# include <iomanip>
	# include <iostream>

	int			add(PhoneBook& pb);
	int			search(const PhoneBook& pb);
	void		exit(void);
	int			display(const PhoneBook& pb);
	std::string	truncate(const std::string& str, size_t width);

# endif
