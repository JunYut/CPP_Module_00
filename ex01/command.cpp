/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:59:58 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/23 15:12:46 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int	add(PhoneBook &phonebook)
{
	int	i;

	i = -1;
	while (++i < 8)
	{
		if (phonebook.contacts[i].is_empty())
			break ;
	}
}

int	search(PhoneBook &phonebook)
{
	int	index;

	phonebook.print_contact_list();
	std::cout << "Enter the index of the contact you want to see: ";
	std::cin >> index;
	phonebook.print_contact(index);
	return (0);
}
