/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimsha2dy <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:25:02 by slimsha2          #+#    #+#             */
/*   Updated: 2023/02/19 12:01:53 by monkeyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int		size;

	public:
		PhoneBook();
		~PhoneBook();
		void	add(int i);
		void	strForm(std::string s);
		void	showContact(int i);
		void	showPhonebook(void);
		void	showInfor(int i);
};

#endif
