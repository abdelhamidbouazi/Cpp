/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 04:38:01 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/21 05:27:48 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	setHp(100);
	setEp(50);
	setAd(20);
    std::cout << "ScavTrap " << name << "'s constructor !!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScapTrap " << getName() << "'s destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (getEp() <= 0)
	{
		std::cout << "Out Of Energy !!!!!!!!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap: " << getName() << ", attacks the " << target << ", and it is causing " << getAd() << " points of damage!." << std::endl;
	setEp(-1);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << getName() << " is now in Gate keeper mode." << std::endl;
}
