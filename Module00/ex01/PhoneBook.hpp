/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:53:56 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/02 14:54:40 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include "Contact.hpp"


class PhoneBook
{
	private:
		Contact		_contact[8];
		int			index;
	public:
		PhoneBook();
		~PhoneBook();
		void	prompt(void);
		void	addContact();
		void 	search();
		void	searchContact();
};

# endif
