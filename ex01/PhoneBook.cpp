/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:53:17 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/23 13:30:51 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

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

// void PhoneBook::search_contact();
void PhoneBook::print_contact(int index)
{
	this->contacts[index].print_contact();
}

void PhoneBook::print_contact_list()
{
	for (int i = 0; i < 8; ++i)
	{
		if (contacts[i].get_first_name() != "")
		{
			std::cout << "First Name: " << contacts[i].get_first_name() << std::endl;
			std::cout << "Last Name: " << contacts[i].get_last_name() << std::endl;
			std::cout << "Nickname: " << contacts[i].get_nickname() << std::endl;
			std::cout << "Phone Number: " << contacts[i].get_phone_number() << std::endl;
			std::cout << "Darkest Secret: " << contacts[i].get_darkest_secret() << std::endl;
		}
	}
}
