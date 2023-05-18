/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 03:34:38 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/14 03:52:22 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Constructor Called" << std::endl;
	this->fixedPointNum = 0;
}

Fixed::Fixed(const &Fixed	cp)
{
	std::cout << "Copy Constructor Called" << std::endl;
	this->fixedPointNum = cp.fixedPointNum;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called\n";
	fixedPointNum = other.fixedPointNum;
	return *this;
}

Fixed::~Fixed()
{
}

