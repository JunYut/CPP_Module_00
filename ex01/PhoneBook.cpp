/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:53:17 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/23 14:52:55 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

static std::string	truncate_str(std::string str);

void PhoneBook::add_contact(Contact &contact)
{
	int	i;

	i = -1;
	while (++i < 8)
	{
		if (contacts[i].get_first_name() == "")
		{
			contacts[i] = contact;
			break ;
		}
	}
}

void PhoneBook::print_contact(int index)
{
	if (index < 0 || index > 7 || contacts[index].get_first_name() == "")
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	this->contacts[index].print_contact();
}

void PhoneBook::print_contact_list()
{
	std::cout << std::right;
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < 8; ++i)
	{
		if (contacts[i].get_first_name() != "")
		{
			std::cout << std::setw(10) << i + 1 << "|";
			std::cout << std::setw(10) << truncate_str(contacts[i].get_first_name()) << "|";
			std::cout << std::setw(10) << truncate_str(contacts[i].get_last_name()) << "|";
			std::cout << std::setw(10) << truncate_str(contacts[i].get_nickname()) << std::endl;
		}
	}
}

static std::string	truncate_str(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str += ".";
	}
	return (str);
}
