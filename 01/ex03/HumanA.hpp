/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choihwiyong <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:29:54 by choihwiy          #+#    #+#             */
/*   Updated: 2023/02/26 14:31:44 by choihwiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon&	weapon;

	public:
		HumanA(std::string name, std::string weapon);
		~HumanA();

		void	attack(void);
}

#endif
