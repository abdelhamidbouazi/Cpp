/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:25:07 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/24 17:45:33 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	(this->brain = new Brain()) ? (std::cout << this->type <<": constructor called" << std::endl) : (std::cout << "Memory allocation failed" << std::endl);

}

Cat::~Cat()
{
	delete	this->brain;
	std::cout << this->type <<": destructor called" << std::endl;
}
Cat::Cat(const Cat &cp) : Animal(cp)
{
	*this = cp;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &cp)
{
	if (this != &cp)
		Animal::operator=(cp);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MEOW MEOW MEOW!" << std::endl;
}

