/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choihwiyong <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:48:41 by choihwiy          #+#    #+#             */
/*   Updated: 2023/02/25 20:51:34 by choihwiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	Horde;

	Horde = ZombieHorde(5, "zombie");
	for (int i = 0; i < 5; i++) {
		Horde[i].announce();
	}
	delete[] Horde;
}
