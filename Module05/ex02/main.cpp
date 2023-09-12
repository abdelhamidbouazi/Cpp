/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:08:30 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/12 18:12:55 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{

    try {
        Bureaucrat b(2, "Abdelhamid");
        // ShrubberyCreationForm s("abdelhamid");
        PresidentialPardonForm r("Abdelhamid");
        AForm f("AForm: Abdelhamid", 100, 50);

        f.beSigned(b);
        std::cout << f << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat b(2, "Abdelhamid");
        AForm f("AForm: Abdelhamid", 100, 50);

        b.signForm(f);
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
