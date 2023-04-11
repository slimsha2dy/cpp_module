/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:32:20 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/11 20:30:18 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    Point   a;
    Point   b(-4.2, 5.80);
    Point   c(4.2, 7.2);
    Point   p1(a);
    Point   p2(-2.35, 3.25);
    Point   p3(-4.4, 2.4);
    Point   p4(-1.6, 6.25);
    Point   p5(-1.4, 6.25);
    Point   p6(0, 5.8);
    Point   p7(0.6, 2.4);
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