/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:35:50 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/18 14:18:57 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
	try
	{
		Bureaucrat test("test", 2);
		Form form_test1("form_test1", 2, 3);

		std::cout << form_test1 << std::endl;
		form_test1.beSigned(test);
		std::cout << form_test1 << std::endl;
		test.signForm(form_test1);

		Form form_test2("form_test2", 0, 3);
		Form form_test3("form_test3", 3, 200);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}