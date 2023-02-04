/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimsha2dy <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:25:02 by slimsha2          #+#    #+#             */
/*   Updated: 2023/02/04 16:40:21 by slimsha2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];

	public:
		PhoneBook();
		~PhoneBook();
		void	add(int i);
		void	showContact(int i);
		void	showPhonebook(void);
};

#endif
