/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:36:28 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/04 15:50:10 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_exeGrade;
	public:
		Form();
		Form(const std::string &name, int sGrade, int eGrade);
		Form(const Form& org);
		~Form();

		Form &operator = (const Form &org);

		
};