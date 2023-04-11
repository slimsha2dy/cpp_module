/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:42:49 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/11 19:36:45 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    
    public:
        Point();
        Point(const Point& other);
        Point(const float x, const float y);
        ~Point();

        Fixed   getX(void) const;
        Fixed   getY(void) const;
        
        Point&  operator =(const Point& other);
        bool    operator ==(const Point& p) const;
        bool    operator !=(const Point& p) const;
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif