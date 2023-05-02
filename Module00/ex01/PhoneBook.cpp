/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:56:44 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/02 15:20:21 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{

}
void	PhoneBook::addContact()
{
	static int	i;
	this->_contact[i++ % 8].starter();
}

// void PhoneBook::searchContact(addContact._contact[0])
// {
// }

void	PhoneBook::prompt(void)
{
	std::cout << "-----------------------------------------------"<<std::endl;
	std::cout << "-        Hello this is your PhoneBook!        -"<<std::endl;
	std::cout << "-----------------------------------------------"<<std::endl;
	std::cout << "- Please choose one of the following choices  -"<<std::endl;
	std::cout << "-----------------------------------------------"<<std::endl;
	std::cout << "-                                             -"<<std::endl;
	std::cout << "-      ~>ADD        To add contact            -"<<std::endl;
	std::cout << "-                                             -"<<std::endl;
	std::cout << "-      ~>SEARCH     To search for a contact   -"<<std::endl;
	std::cout << "-                                             -"<<std::endl;
	std::cout << "-      ~>EXIT       To exit                   -"<<std::endl;
	std::cout << "-                                             -"<<std::endl;
	std::cout << "-----------------------------------------------"<<std::endl;
	std::cout << ""<<std::endl;

}

void	PhoneBook::searchContact()
{
	std::cout << "\tContact List\t" << std::endl;

	for (int i = 0; i < 4 ; i++){
		this->_contact[i].print();
		// std::cout << i <<std::endl;
	}
}
