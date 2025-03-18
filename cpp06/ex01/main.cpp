/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:34:24 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/18 17:44:26 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data		data;
	Data		*data_ptr;
	uintptr_t	ptr;

	data.msg = "Hello World";
	data_ptr = &data; 

	std::cout << "--------------------------------" << std::endl;
	std::cout << "ORIGINAL" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Message: " << data.msg << std::endl;
	std::cout << "Address: " << &data << std::endl;

	std::cout << "--------------------------------" << std::endl;
	std::cout << "SERIALIZER" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	ptr = Serializer::serialize(data_ptr);
	std::cout << "Pointer: " << ptr << std::endl;

	std::cout << "--------------------------------" << std::endl;
	std::cout << "DESERIALIZER" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	data_ptr = Serializer::deserialize(ptr);
	std::cout << "Message: " << data_ptr->msg << std::endl;
	std::cout << "Address: " << data_ptr << std::endl;
	return 0;
}