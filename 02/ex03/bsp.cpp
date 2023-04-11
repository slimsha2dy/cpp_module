/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:35:07 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/11 20:27:09 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    bool    res = false;
    if (point == a || point == b || point == c)
        return (res);
    if (a.getY() > point.getY() != b.getY() > point.getY())
    {
        if (((b.getX()-a.getX()) * (point.getY()-a.getY()) / (b.getY()-a.getY()) + a.getX()) == point.getX())
            return (0);
        if (((b.getX()-a.getX()) * (point.getY()-a.getY()) / (b.getY()-a.getY()) + a.getX()) > point.getX())
            res = (!res);
    }
    if (a.getY() > point.getY() != c.getY() > point.getY())
    {
        if (((c.getX()-a.getX()) * (point.getY()-a.getY()) / (c.getY()-a.getY()) + a.getX()) == point.getX())
            return (0);
        if (((c.getX()-a.getX()) * (point.getY()-a.getY()) / (c.getY()-a.getY()) + a.getX()) > point.getX())
            res = (!res);
    }
    if (b.getY() > point.getY() != c.getY() > point.getY())
    {
        if (((c.getX()-b.getX()) * (point.getY()-b.getY()) / (c.getY()-b.getY()) + b.getX()) == point.getX())
            return (0);
        if (((c.getX()-b.getX()) * (point.getY()-b.getY()) / (c.getY()-b.getY()) + b.getX()) > point.getX())
            res = (!res);
    }
    return (res);
}