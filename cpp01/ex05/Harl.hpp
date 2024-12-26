/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:38:05 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/26 20:38:40 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Harl
{
	private:
			void _debug(void);
			void _info(void);
			void _warning(void);
			void _error(void);
	public:
			void complain(std::string level);
};
