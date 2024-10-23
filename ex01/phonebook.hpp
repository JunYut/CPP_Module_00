/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:45:41 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/23 13:00:05 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef PHONEBOOK_HPP
#  define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];

	public:
		void add_contact(Contact &contact);
		void search_contact();
		void print_contact(int index);
		void print_contact_list();
};

# endif
