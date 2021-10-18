/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:01:09 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/18 16:11:41 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string Target ):
Form("RobotomyRequestForm", 72, 45), target(Target) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &other ):
Form(other.getName(), other.getGradeReq(), other.getGradeExec()), target(other.target) {}

RobotomyRequestForm const &RobotomyRequestForm::operator=( RobotomyRequestForm const &other )
{
	Form::operator=(other);
	this->target = other.target;
	
	return (*this);
}

void		RobotomyRequestForm::Action() const
{
	std::string  arr[3] = {"bzzzzzzzz-bzzzzzzzzz", "drrrrrr", "booooom"};
	srand(std::time(NULL));

	for (int i = 0; i < 5; i++)
		std::cout << arr[rand() % 3] << std::endl;

	if ((rand() % 2) == 0)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << "it’s a failure" << std::endl;
}