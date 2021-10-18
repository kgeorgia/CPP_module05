#include "Intern.hpp"

Intern::Intern( Intern const &other ) { (void)other; }

Intern const	&Intern::operator=( Intern const &other )
{
	(void)other;
	return (*this);
}

Form	*Intern::makeForm( std::string typeForm, std::string targetForm )
{
	std::string typesForm[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int	num_type = 0;

	while (typeForm != typesForm[num_type] && num_type < 3)
		num_type++;
	
	switch (num_type)
	{
	case 0: return (new ShrubberyCreationForm(targetForm));
	case 1: return (new RobotomyRequestForm(targetForm));
	case 2: return (new PresidentialPardonForm(targetForm));
	}
	throw Intern::UnknownTypeExteption();
	return (NULL);
}

const char	*Intern::UnknownTypeExteption::what() const throw()
{
	return ("Unknown type Form");
}