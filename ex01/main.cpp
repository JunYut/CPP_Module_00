/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:39:54 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/24 12:54:02 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	while (1)
	{
		command = prompt("Enter a command: ");
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			add(phonebook);
		else if (command == "SEARCH")
			search(phonebook);
		else
			std::cout << "Unknown command. Please enter ADD, SEARCH, or EXIT." << std::endl;
	}
	return (0);
}
