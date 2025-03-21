/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:58:35 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/21 16:33:30 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


int main(void)
{
	Base *random = generate();
	Base *a = new A();
	Base *b = new B();
	Base *c = new C();

	std::cout << "-------------------------------" << std::endl;
	std::cout << "Identify pointers" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	identify(random);
	identify(a);
	identify(b);
	identify(c);	

	std::cout << "-------------------------------" << std::endl;
	std::cout << "Identify references" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	identify(*a);
	identify(*b);
	identify(*c);

	delete a;
	delete b;
	delete c;
	return 0;
}