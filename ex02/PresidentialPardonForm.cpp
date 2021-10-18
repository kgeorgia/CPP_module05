#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string Target ):
Form("PresidentialPardonForm", 72, 45), target(Target) {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &other ):
Form(other.getName(), other.getGradeReq(), other.getGradeExec()), target(other.target) {}

PresidentialPardonForm const &PresidentialPardonForm::operator=( PresidentialPardonForm const &other )
{
	Form::operator=(other);
	this->target = other.target;
	
	return (*this);
}

void		PresidentialPardonForm::Action() const
{
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}