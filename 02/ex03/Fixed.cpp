/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:54:59 by choihwiy          #+#    #+#             */
/*   Updated: 2023/04/11 20:03:33 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int i)
{
	// std::cout << "Int constructor called" << std::endl;
	this->fixed_point = i << this->fract_bits;
}

Fixed::Fixed(const float f)
{
	// std::cout << "Float contructor called" << std::endl;
	this->fixed_point = roundf(f * (1 << this->fract_bits));
}

int Fixed::toInt(void) const
{
	return (this->fixed_point >> this->fract_bits);
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixed_point) / (1 << this->fract_bits));
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point = raw;
}

Fixed& Fixed::operator =(const Fixed& other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixed_point = other.getRawBits();
	return (*this);
}

std::ostream& operator <<(std::ostream& out, const Fixed& fix)
{
	out << fix.toFloat();
	return (out);
}

bool Fixed::operator >(const Fixed& fix) const
{
	return (this->getRawBits() > fix.getRawBits());
}

bool Fixed::operator <(const Fixed& fix) const
{
	return (this->getRawBits() < fix.getRawBits());
}

bool Fixed::operator >=(const Fixed& fix) const
{
	return (this->getRawBits() >= fix.getRawBits());
}

bool Fixed::operator <=(const Fixed& fix) const
{
	return (this->getRawBits() <= fix.getRawBits());
}

bool Fixed::operator ==(const Fixed& fix) const
{
	return (this->getRawBits() == fix.getRawBits());
}

bool Fixed::operator !=(const Fixed& fix) const
{
	return (this->getRawBits() != fix.getRawBits());
}

Fixed Fixed::operator +(const Fixed& fix) const
{
	Fixed	res(this->toFloat() + fix.toFloat());
	return (res);
}

Fixed Fixed::operator -(const Fixed& fix) const
{
	Fixed	res(this->toFloat() - fix.toFloat());
	return (res);
}

Fixed Fixed::operator *(const Fixed& fix) const
{
	Fixed	res(this->toFloat() * fix.toFloat());
	return (res);
}

Fixed Fixed::operator /(const Fixed& fix) const
{
	Fixed	res(this->toFloat() / fix.toFloat());
	return (res);
}

Fixed& Fixed::operator ++(void)
{
	this->fixed_point++;
	return (*this);
}

const Fixed Fixed::operator ++(int)
{
	Fixed	res(*this);
	this->fixed_point++;
	return (res);
}

Fixed& Fixed::operator --(void)
{
	this->fixed_point--;
	return (*this);
}

const Fixed Fixed::operator --(int)
{
	Fixed	res(*this);
	this->fixed_point--;
	return (res);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a >= b)
		return (b);
	return (a);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a >= b)
		return (b);
	return (a);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a >= b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a >= b)
		return (a);
	return (b);
}