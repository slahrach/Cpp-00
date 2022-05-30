/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:00:54 by slahrach          #+#    #+#             */
/*   Updated: 2022/05/30 02:12:05 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class PhoneBook {
	public :
		PhoneBook(void);
		~PhoneBook(void);
		Contact contacts[8];
		std::string	first;
		std::string	last;
		std::string	nick;
		std::string	phone;
		std::string	secret;
};