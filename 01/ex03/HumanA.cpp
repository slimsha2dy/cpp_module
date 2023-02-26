/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choihwiyong <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:47:02 by choihwiy          #+#    #+#             */
/*   Updated: 2023/02/26 20:44:12 by choihwiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{

}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
