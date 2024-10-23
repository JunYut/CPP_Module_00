/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:37:40 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/23 10:38:39 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

void Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void Contact::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

std::string Contact::get_first_name()
{
	return (this->_first_name);
}

std::string Contact::get_last_name()
{
	return (this->_last_name);
}

std::string Contact::get_nickname()
{
	return (this->_nickname);
}

std::string Contact::get_phone_number()
{
	return (this->_phone_number);
}

std::string Contact::get_darkest_secret()
{
	return (this->_darkest_secret);
}

void Contact::print_contact()
{
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
}
