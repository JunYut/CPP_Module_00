/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:53:17 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/24 10:44:30 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

static std::string	truncate_str(std::string str);

void PhoneBook::add_contact(Contact &contact)
{
	static int	oldest;
	int			i;

	i = -1;
	while (++i < 8)
	{
		if (_contacts[i].is_empty())
		{
			_contacts[i] = contact;
			return ;
		}
	}
	_contacts[oldest] = contact;
	oldest = (oldest + 1) % 8;
}

void PhoneBook::print_contact(int index)
{
	if (index < 0 || index > 7 || _contacts[index].is_empty())
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	_contacts[index].print_contact();
}

void PhoneBook::print_contact_list(void)
{
	std::cout << std::right;
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < 8; ++i)
	{
		if (!_contacts[i].is_empty())
		{
			std::cout << std::setw(10) << i + 1 << "|";
			std::cout << std::setw(10) << truncate_str(_contacts[i].get_first_name()) << "|";
			std::cout << std::setw(10) << truncate_str(_contacts[i].get_last_name()) << "|";
			std::cout << std::setw(10) << truncate_str(_contacts[i].get_nickname()) << std::endl;
		}
	}
}

Contact	*PhoneBook::get_contact(int index)
{
	if (index < 0 || index > 7 || _contacts[index].is_empty())
	{
		std::cout << "Invalid index." << std::endl;
		return (NULL);
	}
	return (&_contacts[index]);
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
