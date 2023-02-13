/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimsha2dy <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:39:49 by slimsha2          #+#    #+#             */
/*   Updated: 2023/02/13 18:29:40 by monkeyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	size = 0;
}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::add(int i)
{
	Contact	temp;
	std::string	line;

	temp = this->contacts[i];
	std::cout << "first name: ";
	std::getline(std::cin, line);
	temp.setFirstName(line);
	std::cout << "last name: ";
	std::getline(std::cin, line);
	temp.setLastName(line);
	std::cout << "nickname: ";
	std::getline(std::cin, line);
	temp.setNickName(line);
	std::cout << "phone number: ";
	std::getline(std::cin, line);
	temp.setPhoneNumber(line);
	std::cout << "darkest secret: ";
	std::getline(std::cin, line);
	temp.setSecret(line);
	if (size < 8)
		this->size++;
}

void	PhoneBook::strForm(std::string s)
{
	std::cout << "|";
	if (s.size() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << s;
	}
	else
	{
		std::cout << s.substr(0, 9);
		std::cout << ".";
	}
}

void	PhoneBook::showContact(int i)
{
	Contact temp;

	temp = this->contacts[i];
	std::cout << i + 1;
	strForm(temp.getFirstName());
	strForm(temp.getLastName());
	strForm(temp.getNickName());
	std::cout << '\n';
}

void	PhoneBook::showPhonebook(void)
{
	for (int i = 0; i < this->size; i++)
		showContact(i);
}
