/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choihwiyong <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:56:27 by choihwiy          #+#    #+#             */
/*   Updated: 2023/02/26 20:49:58 by choihwiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon*	weapon;

	public:
		HumanB(std::string name);
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon& weapon);
};

#endif
