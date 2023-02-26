/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choihwiyong <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:04:16 by choihwiy          #+#    #+#             */
/*   Updated: 2023/02/26 12:17:11 by choihwiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

std::string	Weapon::getType(void)
{
	return (this->type);
}
