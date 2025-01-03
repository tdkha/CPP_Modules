/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:30:16 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/03 19:54:24 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *_inventory[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &original);
		~MateriaSource();

		MateriaSource &operator = (const MateriaSource &original);

		void learnMateria(AMateria *m);
		AMateria *createMateria(const std::string &type);
		AMateria *getInventory(int index);

};