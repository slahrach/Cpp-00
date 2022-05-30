/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 02:15:02 by slahrach          #+#    #+#             */
/*   Updated: 2022/05/30 02:18:55 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::getFirstName(void)
{
	return (Contact::_firstName);
}

std::string	Contact::getLastName(void)
{
	return (Contact::_lastName);
}

std::string	Contact::getNickName(void)
{
	return (Contact::_nickname);
}

std::string	Contact::getPhoneNumber(void)
{
	return (Contact::_phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (Contact::_darkestSecret);
}
