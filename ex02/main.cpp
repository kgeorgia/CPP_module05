/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:35:50 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/18 16:39:47 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main( void )
{
	try
	{
		ShrubberyCreationForm test1("test1");

		RobotomyRequestForm test2("test2");
		// test2.Action();

		PresidentialPardonForm test3("test3");
		// test3.Action();

		Bureaucrat test("test", 1);
		Bureaucrat b_test("b_test", 150);

		test1.beSigned(test);
		test.signForm(test1);
		// test1.execute(test);
		test.executeForm(test1);
		b_test.executeForm(test1);
		std::cout << test1 << std::endl;
		test3.beSigned(test);
		test.executeForm(test3);
		test2.beSigned(test);
		test2.execute(test);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	return 0;
}