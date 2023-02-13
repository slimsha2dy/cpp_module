/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monkeyking <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:14:17 by monkeyki          #+#    #+#             */
/*   Updated: 2023/02/13 18:31:38 by monkeyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	cmd;
	int	index;

	std::cout << "Enter Command: ";
	std::getline(std::cin, cmd);
	index = 0;
	while (cmd != "EXIT")
	{
		if (cmd == "ADD")
			PhoneBook.add(index++);
		else if (cmd == "SEARCH")
		{
			PhoneBook.showPhonebook();
		}
		std::cout <<"Enter Command: ";
		std::getline(std::cin, cmd);
	}
	return (0);
}
