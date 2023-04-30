/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 16:00:35 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/30 17:18:50 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp_ice = nullptr;
	AMateria* tmp_cure = nullptr;
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	tmp_ice = src->createMateria("ice");
	me->equip(tmp_ice);
	tmp_cure = src->createMateria("cure");
	me->equip(tmp_cure);
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	me->unequip(1);
	delete tmp_ice;
	tmp_ice = nullptr;
	delete tmp_cure;
	tmp_cure = nullptr;
	delete bob;
	delete me;
	delete src;
	return (0);
}