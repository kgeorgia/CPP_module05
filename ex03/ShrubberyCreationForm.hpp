/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:22:54 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/18 15:27:33 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		std::string target;

	public:
		ShrubberyCreationForm( std::string Target = "Nonetarget" );
		ShrubberyCreationForm( ShrubberyCreationForm const &other );
		~ShrubberyCreationForm() {}

		ShrubberyCreationForm const &operator=( ShrubberyCreationForm const &other );

		void	Action() const;
};

#endif