/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 06:08:07 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/07 07:17:49 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon& w) : name(Name), wha(w)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void){
	std::cout << name << " attacks with their " << wha.getType() << std::endl;
}
