/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:43:33 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/11 18:13:49 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const Point& other) : x(other.getX()), y(other.getY())
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::~Point()
{
}

Point&  Point::operator =(const Point& other)
{
    if (this != &other)
    {
        const_cast<Fixed&>(x) = other.getX();
        const_cast<Fixed&>(y) = other.getY();
    }
    return (*this);
}

Fixed   Point::getX(void) const
{
    return (this->x);
}

Fixed   Point::getY(void) const
{
    return (this->y);
}

bool    Point::operator ==(const Point& p) const
{
    if (this->getX() == p.getX() && this->getY() == p.getY())
        return (1);
    return (0);
}

bool    Point::operator !=(const Point& p) const
{
    if (this->getX() == p.getX() && this->getY() == p.getY())
        return (0);
    return (1);
}