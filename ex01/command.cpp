/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:59:58 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/24 12:55:09 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void	trim_str(std::string &str);

std::string	prompt(const std::string &msg)
{
	std::string	input;

	do
	{
		std::cout << msg;
		std::getline(std::cin, input);
		trim_str(input);
	} while (input.empty());
	return (input);
}

int	add(PhoneBook &phonebook)
{
	Contact	contact;
	std::string	input;

	input = prompt("Enter the first name: ");
	contact.set_first_name(input);
	input = prompt("Enter the last name: ");
	contact.set_last_name(input);
	input = prompt("Enter the nickname: ");
	contact.set_nickname(input);
	input = prompt("Enter the phone number: ");
	contact.set_phone_number(input);
	input = prompt("Enter the darkest secret: ");
	contact.set_darkest_secret(input);
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

void	trim_str(std::string &str)
{
	size_t	start;
	size_t	end;

	start = str.find_first_not_of(" \t");
	if (start == std::string::npos)
	{
		str.clear();
		return ;
	}
	end = str.find_last_not_of(" \t");
	str = str.substr(start, end - start + 1);
}
