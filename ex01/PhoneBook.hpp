/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:45:41 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/24 13:03:05 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef PHONEBOOK_HPP
#  define PHONEBOOK_HPP

# include <limits>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];

	public:
		void	add_contact(Contact &contact);
		void	print_contact(int index);
		void	print_contact_list(void);
		Contact	*get_contact(int index);
};

std::string	prompt(const std::string &msg);
int			add(PhoneBook &phonebook);
int			search(PhoneBook &phonebook);

# endif
