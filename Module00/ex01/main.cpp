/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:53:26 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/02 15:20:34 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(){

	std::string	input;
	PhoneBook	Book;

	Book.prompt();
	while(input.compare("EXIT"))
	{
		getline(std::cin, input);
		if(input.compare("ADD") == 0){
			Book.addContact();
		}
		else if(input.compare("SEARCH") == 0){
			Book.searchContact();
			// std::cout << "in process 2 " << std::endl;
		}
	}
}
