/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:36:27 by slahrach          #+#    #+#             */
/*   Updated: 2022/05/30 02:13:36 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
	int			i;
	int			j;
	PhoneBook	book;
	std::string	str;

	i = 0;
	while (1)
	{
		std::cout << "enter one of three commands : ADD, SEARCH, EXIT : ";
		std::getline (std::cin, str);
		if (!str.std::string::compare("EXIT"))
			return (0);
		else if (!str.std::string::compare("ADD"))
		{
			if (i == 8)
				i = 0;
			std::cout << "enter first name : ";
			std::getline (std::cin, book.first);
			std::cout << "enter last name : ";
			std::getline (std::cin, book.last);
			std::cout << "enter nickname : ";
			std::getline (std::cin, book.nick);
			std::cout << "enter phone number : ";
			std::getline (std::cin, book.phone);
			std::cout << "enter darkest secret : ";
			std::getline (std::cin, book.secret);
			if (!book.first.empty() && !book.last.empty() && !book.nick.empty() && !book.phone.empty() && !book.secret.empty())
			{
				book.contacts[i].getFirstName() = book.first;
				book.contacts[i].getLastName() = book.last;
				book.contacts[i].getNickName() = book.nick;
				book.contacts[i].getPhoneNumber() = book.phone;
				book.contacts[i].getDarkestSecret() = book.secret;
				i++;
			}
		}
		else if (!str.std::string::compare("SEARCH"))
		{
			j = 0;
			while (!book.contacts[j].getFirstName().empty())
			{
				if (book.contacts[j].getFirstName().length() > 10)
				{
					book.contacts[j].getFirstName().erase(book.contacts[j].getFirstName().begin() + 9,
						book.contacts[j].getFirstName().end());
					book.contacts[j].getFirstName().push_back('.');
				}
				if ( book.contacts[j].getLastName().length() > 10)
				{
					book.contacts[j].getLastName().erase( book.contacts[j].getLastName().begin() + 9,
						book.contacts[j].getLastName().end());
					book.contacts[j].getLastName().push_back('.');
				}
				if (book.contacts[j].getNickName().length() > 10)
				{
					book.contacts[j].getNickName().erase(book.contacts[j].getNickName().begin() + 9,
						book.contacts[j].getNickName().end());
					book.contacts[j].getNickName().push_back('.');
				}
				std::cout << j << "   |   " << book.contacts[j].getFirstName();
				std::cout << "   |   " << book.contacts[j].getLastName();
				std::cout << "   |   " << book.contacts[j].getNickName() << std::endl;
				j++;
			}
		}
		else
			std::cout << "Invalid command!" << std::endl;
	}
}