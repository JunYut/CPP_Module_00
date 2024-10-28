/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:59:58 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/28 10:17:22 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

static bool	valid_phone_number(const std::string &str);
static void	trim_str(std::string &str);

std::string	prompt(const std::string &msg)
{
	std::string	input;

	do
	{
		std::cout << msg;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			input.clear();
			exit(0);
			break;
		}
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
	do
		input = prompt("Enter the phone number: ");
	while (!valid_phone_number(input));
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
	while (true)
	{
		std::cin >> index;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please enter a valid integer: ";
		}
		else
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break;
		}
	}
	phonebook.print_contact(index - 1);
	return (0);
}

static bool	valid_phone_number(const std::string &str)
{
	if (str.length() != 10 || str.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "Invalid phone number. Please enter a 10-digit number." << std::endl;
		return (false);
	}
	return (true);
}

static void	trim_str(std::string &str)
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
