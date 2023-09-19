/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:41:54 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/18 22:15:54 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

typedef struct s_bools {
	bool	isPoint;
	bool	isFloat;
}	t_bools;

enum ParamTypes {
	INT,
	FLOAt,
	CHAR,
	DOUBLE,
	ELSE
};

class ScalarConverter
{
	private:
		std::string	param;
		ScalarConverter();
	public:

		ScalarConverter(std::string	p);
		~ScalarConverter();

		ScalarConverter(ScalarConverter const &cp);
		ScalarConverter& operator=(const ScalarConverter &cp);

		std::string getParam();
		static void convert(std::string param);

};

# endif
