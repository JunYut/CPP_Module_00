# pragma once
# ifndef __PHONEBOOK_H__
	# define __PHONEBOOK_H__

	# include "PhoneBook.hpp"
	# include <sstream>
	# include <string>
	# include <iomanip>
	# include <iostream>

	int			add(PhoneBook& pb);
	int			search(const PhoneBook& pb);
	void		exit(void);
	int			display_ent(const PhoneBook& pb, int index);
	int			search_prompt(void);
	int			display_contact(const PhoneBook& pb);
	int			format_field(const std::string& str);
	std::string	truncate(const std::string& str, size_t width);
	int			stoi(const std::string& str);

# endif
