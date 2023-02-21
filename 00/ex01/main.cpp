/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monkeyking <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:14:17 by monkeyki          #+#    #+#             */
/*   Updated: 2023/02/21 15:51:46 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	cmd;
	int	index;
	int	input;

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
			std::cout << "Enter Index: ";
			if (std::cin >> input) {
				if (input < 1 || input > PhoneBook.getSize())
					std::cout << "Error: Index is out of range\n";
				else
					PhoneBook.showInfor(input);
			}
			else {
				std::cin.clear(); // error 상태를 해제
				std::cin.ignore(); // 입력 버퍼 비우기
				std::cout << "Error: Invalid input\n";
			}
			std::cin.ignore();
		}
		if (index == 8)
			index = 0;
		if (std::cin.eof())
			break ;
		std::cout <<"Enter Command: ";
		std::getline(std::cin, cmd);
	}
	return (0);
}
