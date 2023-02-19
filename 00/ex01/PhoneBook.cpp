/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimsha2dy <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:39:49 by slimsha2          #+#    #+#             */
/*   Updated: 2023/02/19 18:29:40 by monkeyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->size = 0;
}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::add(int i)
{
	std::string	line;

	std::cout << "first name: ";
	while (!std::getline(std::cin, line)) {
		if (!line.empty()) {
			this->contacts[i].setFirstName(line);
			break ;
		}
		std::cout << "please enter a non-empty input\n";
	}
	std::cout << "last name: ";
	while (!std::getline(std::cin, line)) {
		if (!line.empty()) {
			this->contacts[i].setLastName(line);
			break ;
		}
		std::cout << "please enter a non-empty input\n";
	}
	std::cout << "nickname: ";
	while (!std::getline(std::cin, line)) {
		if (!line.empty()) {
			this->contacts[i].setNickName(line);
			break ;
		}
		std::cout << "please enter a non-empty input\n";
	}
	std::cout << "phone number: ";
	while (!std::getline(std::cin, line)) {
		if (!line.empty()) {
			this->contacts[i].setPhoneNumber(line);
			break ;
		}
		std::cout << "please enter a non-empty input\n";
	}
	std::cout << "darkest secret: ";
	while (!std::getline(std::cin, line)) {
		if (!line.empty()) {
			this->contacts[i].setSecret(line);
			break ;
		}
		std::cout << "please enter a non-empty input\n";
	}
	if (this->size < 8)
		this->size++;
}

void	PhoneBook::strForm(std::string s)
{
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
	std::cout << "|";
}

void	PhoneBook::showContact(int i)
{
	Contact temp;

	temp = this->contacts[i];
	std::cout << std::setw(10);
	std::cout << i + 1 << '|';
	strForm(temp.getFirstName());
	strForm(temp.getLastName());
	strForm(temp.getNickName());
	std::cout << '\n';
}

void	PhoneBook::showPhonebook(void)
{
	strForm("index");
	strForm("first name");
	strForm("last name");
	strForm("nickname");
	std::cout << '\n';
	for (int i = 0; i < this->size; i++)
		showContact(i);
}

void	PhoneBook::showInfor(int i)
{
	Contact temp;

	temp = this->contacts[i];
	std::cout << "first name: " << temp.getFirstName() << '\n';
	std::cout << "last name: " << temp.getLastName() << '\n';
	std::cout << "nickname: " << temp.getNickName() << '\n';
	std::cout << "phone number: " << temp.getPhoneNumber() << '\n';
	std::cout << "darkest secret: " << temp.getSecret() << '\n';
}
