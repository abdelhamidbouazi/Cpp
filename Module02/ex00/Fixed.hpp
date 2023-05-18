/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 03:32:34 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/14 03:53:14 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					fixedPointNum;
		static const int	fractionalBits;
	public:
		Fixed();
		Fixed(const &Fixed	cp);
		Fixed& operator=(const Fixed& other);
		~Fixed();
};
