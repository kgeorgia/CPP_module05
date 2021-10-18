/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:38:27 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/18 15:34:31 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	name;
		int	const			gradeRequired;
		int	const			gradeExecute;
		bool				isSigned;

	public:
		Form( std::string Name = "Form", int Grade_req = 150, int Grade_exec = 150);
		Form( Form const &other );
		~Form() {}

		Form const &operator=( Form const &other );

		std::string		getName( void ) const;
		int				getGradeReq( void ) const;
		int				getGradeExec( void ) const;
		bool			getStatus( void ) const;

		void			beSigned( Bureaucrat const &bure );
		void			execute( Bureaucrat const &executor ) const;
		virtual void	Action() const = 0;

		class GradeTooHighException: public std::exception
		{
			virtual const char *what() const throw();	
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char *what() const throw();	
		};
		class FormIsNotSignedException: public std::exception
		{
			virtual const char *what() const throw();	
		};
};

std::ostream &operator<<( std::ostream &out, Form const &form );

#endif