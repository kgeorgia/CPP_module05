/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:24:43 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/18 14:21:21 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const	name;
		int					grade;

	public:
		Bureaucrat( std::string const &Name = "Noname", int Grade = 150 );
		Bureaucrat( Bureaucrat const &other );
		~Bureaucrat() {}

		Bureaucrat const &operator=( Bureaucrat const &other );

		std::string const	getName( void ) const;
		int					getGrade( void ) const;
		void				incrementGrade( void );
		void				decrementGrade( void );
		void				signForm( Form const &form );

		class GradeTooHighException: public std::exception
		{
			virtual const char *what() const throw();	
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char *what() const throw();	
		};

};

std::ostream &operator<<( std::ostream &out, Bureaucrat const &bure );

#endif