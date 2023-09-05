/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:49:18 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/05 10:55:51 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b;

	try {
        Bureaucrat b(1000, "Abdelhamid");

        std::cout << b.getGrade() << std::endl;

        b.incrementBureaucratGrade();
    } catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
	try {
        Bureaucrat b(-1, "Abdelhamid");

        std::cout << b.getGrade() << std::endl;

        b.incrementBureaucratGrade();
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
}
