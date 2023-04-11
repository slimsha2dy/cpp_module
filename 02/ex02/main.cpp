/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choihwiyong <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:11:40 by choihwiy          #+#    #+#             */
/*   Updated: 2023/04/11 13:23:06 by choihwiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	fix(24.3f);
	Fixed	b(32);

	std::cout << fix + b << std::endl;
	std::cout << fix << std::endl;
	std::cout << fix++ << std::endl;
	std::cout << fix << std::endl;
	std::cout << ++fix << std::endl;
}
