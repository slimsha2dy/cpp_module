/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choihwiyong <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 22:33:12 by choihwiy          #+#    #+#             */
/*   Updated: 2023/04/06 22:42:51 by choihwiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	h;
	if (ac != 2)
	{
		std::cout << "argument error" << std::endl;
		return (0);
	}
	h.complain(av[1]);
	return (0);
}
