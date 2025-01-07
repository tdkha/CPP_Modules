/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 01:20:50 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/07 15:21:24 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		WrongAnimal(const std::string&wronganimal);
		WrongAnimal(const WrongAnimal&wronganimal);
		~WrongAnimal(void);

		WrongAnimal&	operator=(const WrongAnimal&);
		
		std::string	getType(void) const;
		void	makeSound(void)	const;
};