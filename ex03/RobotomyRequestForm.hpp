/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:58:53 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/18 16:00:38 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form 
{
	private:
		std::string target;

	public:
		RobotomyRequestForm( std::string Target = "Nonetarget" );
		RobotomyRequestForm( RobotomyRequestForm const &other );
		~RobotomyRequestForm() {}

		RobotomyRequestForm const &operator=( RobotomyRequestForm const &other );

		void	Action() const;
};

#endif