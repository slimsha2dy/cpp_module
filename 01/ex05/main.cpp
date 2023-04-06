/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choihwiyong <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 22:08:31 by choihwiy          #+#    #+#             */
/*   Updated: 2023/04/06 22:28:43 by choihwiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	h;

	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			std::string input = static_cast<std::string>(av[i]);
			h.complain(input);
		}
	}
	else
	{
		h.complain("DEBUG");
		h.complain("INFO");
		h.complain("WARNING");
		h.complain("ERROR");
	}
	return (0);
}
