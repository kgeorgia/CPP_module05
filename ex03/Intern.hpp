#ifndef INTERN_HPP
# define INTERN_HPP

# include <exception>
# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"


class Intern
{
	public:
		Intern() {}
		Intern( Intern const &other );
		~Intern() {}

		Intern const &operator=( Intern const &other );

		Form	*makeForm( std::string typeForm, std::string targetForm );

		class  UnknownTypeExteption: public std::exception
		{
			virtual const char	*what() const throw();
		};
};

#endif