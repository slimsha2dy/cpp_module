/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choihwiyong <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 05:19:17 by choihwiy          #+#    #+#             */
/*   Updated: 2023/02/25 20:54:12 by choihwiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde(int N, std::string name)
{
	Zombie*	horde;

	horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		std::stringstream	ss;
		ss << name << i + 1;
		horde[i].setName(ss.str());
	}
	return (horde);
}
