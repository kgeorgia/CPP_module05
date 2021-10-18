#include "Form.hpp"

Form::Form( std::string Name, int Grade_req, int Grade_exec):
name(Name), gradeRequired(Grade_req), gradeExecute(Grade_exec), isSigned(false)
{
	if (Grade_req > 150 || Grade_exec > 150)
		throw GradeTooLowException();
	else if (Grade_req < 1 || Grade_exec < 1)
		throw GradeTooHighException();
	
}

Form::Form( Form const &other ): name(other.getName()), gradeRequired(other.getGradeReq()),
gradeExecute(other.getGradeExec()), isSigned(other.getStatus()) {}

Form const &Form::operator=( Form const &other )
{
	this->isSigned = other.getStatus();
	return (*this);
}

std::string		Form::getName( void ) const { return (this->name); }

int				Form::getGradeReq( void ) const { return (this->gradeRequired); }

int				Form::getGradeExec( void ) const { return (this->gradeExecute); }

bool			Form::getStatus( void ) const { return (this->isSigned); }

void			Form::beSigned( Bureaucrat const &bure )
{
	if (this->gradeRequired < bure.getGrade())
		throw GradeTooLowException();
	else
		this->isSigned = true;
}

void			Form::execute( Bureaucrat const &executor ) const
{
	if (this->isSigned == false)
		throw Form::FormIsNotSignedException();
	else if (executor.getGrade() > this->gradeExecute)
		throw Form::GradeTooLowException();
	else
		this->Action();
}

const char		*Form::GradeTooHighException::what() const throw()
{
	return ("Form grade is too high");
}

const char		*Form::GradeTooLowException::what() const throw()
{
	return ("Form grade is too low");
}

const char		*Form::FormIsNotSignedException::what() const throw()
{
	return ("Form is not signed");
}

std::ostream	&operator<<( std::ostream &out, Form const &form )
{
	out << form.getName() << " ,form grade required to sign: "
		<< form.getGradeReq() << " ,form grade required to execute: "
		<< form.getGradeExec() << " ,form is signed: "
		<< form.getStatus();

	return (out);
}