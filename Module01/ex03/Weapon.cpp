/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 05:56:13 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/07 07:02:31 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string Type){
	this->type = Type;
}

Weapon::~Weapon(){
}

const std::string	Weapon::getType(){
	const std::string	&_type = type;
	return _type;
}

void	Weapon::setType( std::string Type){
	type = Type;
}
