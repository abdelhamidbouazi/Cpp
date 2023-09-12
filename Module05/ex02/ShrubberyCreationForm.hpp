/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:16:21 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/12 18:03:14 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		const std::string	target;
	public:
		ShrubberyCreationForm(const std::string	t);
		~ShrubberyCreationForm();

		ShrubberyCreationForm(const ShrubberyCreationForm &cp);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &cp);
};

# endif
