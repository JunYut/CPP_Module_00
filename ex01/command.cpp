/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:59:58 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/24 10:53:17 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int	add(PhoneBook &phonebook)
{
	Contact	contact;
	std::string	input;

	std::cout << "Enter the first name: ";
	std::getline(std::cin, input);	contact.set_first_name(input);
	std::cout << "Enter the last name: ";
	std::getline(std::cin, input);	contact.set_last_name(input);
	std::cout << "Enter the nickname: ";
	std::getline(std::cin, input);	contact.set_nickname(input);
	std::cout << "Enter the phone number: ";
	std::getline(std::cin, input);	contact.set_phone_number(input);
	std::cout << "Enter the darkest secret: ";
	std::getline(std::cin, input);	contact.set_darkest_secret(input);
	phonebook.add_contact(contact);
	return (0);
}

int	search(PhoneBook &phonebook)
{
	int	index;

	phonebook.print_contact_list();
	std::cout << "Enter the index of the contact you want to see: ";
	std::cin >> index;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	phonebook.print_contact(index - 1);
	return (0);
}
