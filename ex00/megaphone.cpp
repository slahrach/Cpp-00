/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:24:08 by slahrach          #+#    #+#             */
/*   Updated: 2022/05/29 21:33:22 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if(int(argv[i][j]) <= 122 && int(argv[i][j]) >= 97)
				argv[i][j] -= 32;
			j++;
		}
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
