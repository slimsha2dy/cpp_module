/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:32:20 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/14 17:29:42 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    Point   a(-4, -1);
    Point   b(3.5, 5);
    Point   c(2.5, -4.5);
    Point   p1(a);
    Point   p2(0.5, 2.6);
    Point   p3(-0.1, -3.1);
    Point   p4(2.9, -0.7);
    Point   p5(1, 0);
    Point   p6(-0.4, -2.6);
    Point   p7(3.4, 4.6);
    Point   p8(-0.2, 0.6);
    
    std::cout << "false case" << std::endl;
    std::cout << bsp(a, b, c, p1) << std::endl;
    std::cout << bsp(a, b, c, p2) << std::endl;
    std::cout << bsp(a, b, c, p3) << std::endl;
    std::cout << bsp(a, b, c, p4) << std::endl;

    std::cout << "\ntrue case" << std::endl;
    std::cout << bsp(a, b, c, p5) << std::endl;
    std::cout << bsp(a, b, c, p6) << std::endl;
    std::cout << bsp(a, b, c, p7) << std::endl;
    std::cout << bsp(a, b, c, p8) << std::endl;
}