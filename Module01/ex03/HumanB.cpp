/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 06:10:54 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/07 07:24:47 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name) : name(Name)
{
	this->wHB = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack(){
	std::cout << name << " attacks with their " << wHB->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& whb){
	this->wHB = &whb;
}
