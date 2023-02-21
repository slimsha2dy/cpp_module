/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:22:56 by hwichoi           #+#    #+#             */
/*   Updated: 2023/02/21 20:51:55 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#include "Zombie.hpp"

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie();
		~Zombie();

		void	setName(std::string);
		void	announce(void);
}
