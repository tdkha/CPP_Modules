/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:48:17 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/21 16:33:14 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {};

Base *generate(void)
{
	std::srand(time(0));
	int num = rand() % 3;
	if (num == 0)
		return new A();
	else if (num == 1)
		return new B();
	else if (num == 2)
		return new C();
	else
		return 0;
}

void identify(Base *p)
{
	if (!p)
		std::cout << "NULL" << std::endl;
	else if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Undefined" << std::endl;
} 

void identify(Base &p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast &e)
	{
		try
		{
			B& b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch(std::bad_cast &e)
		{
			try
			{
				C& c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch(std::bad_cast &e)
			{
				std::cout << "Undefined" << std::endl;
			}
		}
	}
}