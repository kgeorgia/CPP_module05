/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:35:50 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/18 13:19:46 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
	try
	{
		Bureaucrat test1("test1", 22);
		
		std::cout << test1.getGrade() << '\n';
		std::cout << test1.getName() << '\n';
		test1.incrementGrade();
		std::cout << test1 << std::endl;
		test1.decrementGrade();
		std::cout << test1 << std::endl;

		Bureaucrat test2("test2", 0);

		Bureaucrat test3("test3", 151);

		Bureaucrat test4("test4", 1);
		std::cout << test4 << std::endl;
		test4.incrementGrade();

		Bureaucrat test5("test5", 150);
		std::cout << test5 << std::endl;
		test5.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}