/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:39:54 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/23 13:57:42 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phonebook;
	Contact contact;

	contact.set_first_name("aLongLongName");
	contact.set_last_name("Tan");
	contact.set_nickname("Jun yu");
	contact.set_phone_number("1234567890");
	contact.set_darkest_secret("I am a student at 42.");
	// contact.print_contact();

	phonebook.add_contact(contact);
	phonebook.print_contact_list();
	phonebook.print_contact(0);
	return (0);
}
