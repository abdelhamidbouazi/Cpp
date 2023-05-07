/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 06:10:08 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/07 07:16:30 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon*	wHB;
		std::string	name;
	public:
		HumanB(std::string Name);
		~HumanB();
		void	setWeapon(Weapon& whb);
		void	attack();
};
