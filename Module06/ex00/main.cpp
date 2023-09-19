/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:41:49 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/18 23:19:49 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>


int main(int ac, char **av){
	try {
		if (ac != 2)
			throw "Arguments error";
		ScalarConverter::convert(av[1]);
			// throw "Unknown Type";
	}
	catch (const char e[])
	{
		std::cerr << e << std::endl;
	}
	return 0;
}
