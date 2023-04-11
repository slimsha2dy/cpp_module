/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:54:48 by choihwiy          #+#    #+#             */
/*   Updated: 2023/04/11 16:20:24 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int	fixed_point;
		static const int	fract_bits = 8;

	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();
		Fixed(const Fixed& other);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		int	toInt(void) const;
		float	toFloat(void) const;

		Fixed&	operator =(const Fixed& other);
		bool	operator >(const Fixed& fix) const;
		bool	operator <(const Fixed& fix) const;
		bool	operator >=(const Fixed& fix) const;
		bool	operator <=(const Fixed& fix) const;
		bool	operator ==(const Fixed& fix) const;
		bool	operator !=(const Fixed& fix) const;

		Fixed	operator +(const Fixed& fix) const;
		Fixed	operator -(const Fixed& fix) const;
		Fixed	operator *(const Fixed& fix) const;
		Fixed	operator /(const Fixed& fix) const;

		Fixed&	operator ++(void);
		const Fixed	operator ++(int);
		Fixed&	operator --(void);
		const Fixed	operator --(int);

		static Fixed&	min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&	max(Fixed& a, Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);
};

std::ostream& operator <<(std::ostream& out, const Fixed& fix);

#endif
