/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:13:59 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/18 16:14:00 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form 
{
	private:
		std::string target;

	public:
		PresidentialPardonForm( std::string Target = "Nonetarget" );
		PresidentialPardonForm( PresidentialPardonForm const &other );
		~PresidentialPardonForm() {}

		PresidentialPardonForm const &operator=( PresidentialPardonForm const &other );

		void	Action() const;
};

#endif