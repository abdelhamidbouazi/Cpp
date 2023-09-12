/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:51:40 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/12 18:16:22 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		const std::string	target;
	public:
		PresidentialPardonForm(const std::string	t);
		~PresidentialPardonForm();

		PresidentialPardonForm(PresidentialPardonForm &cp);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &cp);
};


# endif
