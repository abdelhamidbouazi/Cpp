/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:28:56 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/12 17:11:56 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		std::string const	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;
	public:
		AForm();
		~AForm();

		AForm(const std::string nm, const int sg, const int eg);
		AForm(const AForm& cp);
		AForm& operator=(const AForm &cp);

		void	beSigned(Bureaucrat &b);

		class GradeTooHighException : public std::exception
		{
				public : virtual const char* what() const throw(){
					return "Grade Too High";
				}
		};
		class GradeTooLowException : public std::exception
		{
				public : virtual const char* what() const throw(){
					return "Grade Too Low";
				}
		};

		// getters

		std::string	getName() const;
		bool		getIsSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;

};

std::ostream& operator<<(std::ostream& otsm, const AForm& fm);

# endif
