/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:57:03 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/05 11:01:52 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Default constructor
Bureaucrat::Bureaucrat() : grade(1), name("Abdelhamid")
{
	std::cout << "Default Construnctor Called" << std::endl;
}

// paramaterized contructor
Bureaucrat::Bureaucrat(int gr, const std::string na) : grade(gr), name(na)
{
	std::cout << "Paramiterized Contructor Called" << std::endl;
	if (gr > 150)
		throw Bureaucrat::GradeTooLowException();
	if (gr < 1)
		throw Bureaucrat::GradeTooHighException();

}


Bureaucrat::Bureaucrat(const Bureaucrat &cp)
{
		this->grade = cp.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cp)
{
	if (this != &cp){
		this->grade = cp.grade;
	}
	std::cout << this->name <<": copy assignment operator called" << std::endl;
	return *this;
}

// Getters
std::string const Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

// Increment and Decrement
void Bureaucrat::incrementBureaucratGrade()
{
	this->grade--;
}

void Bureaucrat::decrementBureacratGrade()
{
	this->grade++;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Desctructor Called" << std::endl;
}
