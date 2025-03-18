/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:24:50 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/18 17:49:26 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Data.hpp"
#include <cstdint>

class Serializer
{
	private:
		Serializer() = delete;
		Serializer(Serializer const &org) = delete;
		Serializer &operator = (Serializer const &org) = delete;
		~Serializer() = delete;
	public:
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};