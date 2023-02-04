/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimsha2dy <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:21:52 by slimsha2          #+#    #+#             */
/*   Updated: 2023/02/04 16:12:15 by slimsha2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string.h>
#include <iomanip>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	secret;

	public:
		Contact();
		~Contact();

		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string getNickName() const;
		std::string	getPhoneNumber() const;
		std::string	getSecret() const;

		void	setFirstName(std::string firstName);
		void	setLastName(std::string lastName);
		void	setNickName(std::string nickName);
		void	setPhoneNumber(std::string phoneNumber);
		void	setSecret(std::string secret);
};

#endif
