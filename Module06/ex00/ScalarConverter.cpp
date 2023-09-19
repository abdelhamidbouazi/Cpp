/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:41:53 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/18 23:19:28 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(std::string p)
{
	this->param = p;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &cp)
{
	if (this != cp){
		this->param = cp.p;
	}
	return *this;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &cp)
{
	if (this != cp){
		this->param = cp.p;
	}
	return *this;
}

std::string ScalarConverter::getParam()
{
	return param;
}

void ScalarConverter::convert(std::string param)
{
	DetectType(param);
}

int DetectType(std::string param){
	std::cout << param << std::endl;


	if (param.length() == 1)
		return CHAR;
	if (param == "Not Known")
		return ELSE;

	return 0;
}
