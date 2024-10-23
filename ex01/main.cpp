/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:39:54 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/23 10:41:25 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

int	main(void)
{
	Contact contact;

	contact.set_first_name("Jun Yu");
	contact.set_last_name("Tan");
	contact.set_nickname("Jun yu");
	contact.set_phone_number("1234567890");
	contact.set_darkest_secret("I am a student at 42.");
	contact.print_contact();
}
