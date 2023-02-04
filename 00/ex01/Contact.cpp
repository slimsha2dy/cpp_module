/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimsha2dy <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:12:23 by slimsha2          #+#    #+#             */
/*   Updated: 2023/02/04 16:24:39 by slimsha2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void	Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::setSecret(std::string secret)
{
	this->secret = secret;
}

std::string	Contact::getFirstName(void) const
{
	return (this->firstName);
}

std::string Contact::getLastName(void) const
{
	return (this->lastName);
}

std::string Contact::getNickName(void) const
{
	return (this->nickName);
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->phoneNumber);
}

std::string Contact::getSecret(void) const
{
	return (this->secret);
}
