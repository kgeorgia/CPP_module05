/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:00:57 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/18 16:01:05 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string Target ):
Form("ShrubberyCreationForm", 145, 137), target(Target) {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &other ):
Form(other.getName(), other.getGradeReq(), other.getGradeExec()), target(other.target) {}

ShrubberyCreationForm const &ShrubberyCreationForm::operator=( ShrubberyCreationForm const &other )
{
	Form::operator=(other);
	this->target = other.target;
	
	return (*this);
}

void		ShrubberyCreationForm::Action() const
{
	std::ofstream  file;

	file.open(this->target + "_shrubbery");
	if (file.is_open())
	{
		file << ". .       .           .        .           . " << std::endl
			<<	"   .          .          .     .            ." << std::endl
			<<	"    .       .       *****    .        .   .  " << std::endl
			<<	" .     .       . *******@***                 " << std::endl
			<<	"    .         ****@**********@***  .    .    " << std::endl
			<<	"              *********************          " << std::endl
			<<	"   .    .    ****@**********@********        " << std::endl
			<<	"       .    *********@***************    .   " << std::endl
			<<	"             *******************@**          " << std::endl
			<<	"    .    .       *@***********      .        " << std::endl
			<<	"                       00                    " << std::endl
			<<	"   .      .     .     000             .      " << std::endl
			<<	"   \"            \"    0000       .     \"      " << std::endl
			<<	"#############################################" << std::endl;
	}
	file.close();
}