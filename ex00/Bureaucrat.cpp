/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:24:58 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/17 18:32:19 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string const &Name, int Grade ): name(Name)
{
	if (Grade > 150)
		throw GradeTooLowException();
	else if (Grade < 1)
		throw GradeTooHighException();
	this->grade = Grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const &other ): name(other.name), grade(other.grade) {}

Bureaucrat const &Bureaucrat::operator=( Bureaucrat const &other )
{
	this->grade = other.getGrade();
	return (*this);
}

std::string const Bureaucrat::getName( void ) const
{
	return (this->name);
}

int		Bureaucrat::getGrade( void ) const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade( void )
{
	if (this->grade < 2)
		throw GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::decrementGrade( void )
{
	if (this->grade > 149)
		throw GradeTooLowException();
	this->grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream &operator<<( std::ostream &out, Bureaucrat const &bure )
{
	out << bure.getName() << ", bureaucrat grade " << bure.getGrade();
	return (out);
}