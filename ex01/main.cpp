/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:39:54 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/23 14:57:45 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	while (1)
	{
		std::cout << "Please enter a command: ";
		std::cin >> command;
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{

		}
		else if (command == "SEARCH")
		{

		}
		else
			std::cout << "Unknown command. Please enter ADD, SEARCH, or EXIT." << std::endl;
	}
	return (0);
}
