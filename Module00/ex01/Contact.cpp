/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:00:47 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/02 15:20:07 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <fstream>


Contact::Contact()
{
	std::cout << "contructor called" << std::endl;
}

Contact::~Contact()
{
}

void Contact::starter(void){
	std::string		fName;
	std::string		lName;
	std::string		nName;
	std::string		pNumber;
	std::string		dSecret;
	bool			done = false;

	while (done == false){
	std::cout << "Enter First Name : " << std::flush;
	getline(std::cin, fName);
	std::cout << "Enter Last Name : " << std::flush;
	getline(std::cin, lName);
	std::cout << "Enter Nickname : " << std::flush;
	getline(std::cin, nName);
	std::cout << "Enter Phone Number : " << std::flush;
	getline(std::cin, pNumber);
	std::cout << "Enter Darkest Secret : " << std::flush;
	getline(std::cin, dSecret);


	if (!fName.empty() && !lName.empty() && !nName.empty() && !pNumber.empty() && !dSecret.empty()) {
		this->firstName = fName;
		this->lastName = lName;
		this->nickName = nName;
		this->phoneNumber = pNumber;
		this->darkestSecret = dSecret;
		done = true;
	} else
		std::cout << "Error: Please fill all fields"<< std::endl;
	}
}
void	Contact::print()
{
	// here I will print search
	if (!this->firstName.empty()){
		std::cout << this->firstName << std::endl;
		std::cout << this->lastName << std::endl;
		std::cout << this->nickName << std::endl;
		std::cout << this->phoneNumber << std::endl;
		std::cout << this->darkestSecret << std::endl;
	}
}

