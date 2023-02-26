/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choihwiyong <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:04:45 by choihwiy          #+#    #+#             */
/*   Updated: 2023/02/26 12:16:21 by choihwiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon();
		~Weapon();
		Weapon(std::string type);

		void		setType(std::string type);
		std::string	getType(void);
};

#endif
