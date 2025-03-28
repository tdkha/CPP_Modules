/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:01:59 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/28 16:09:08 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
			MutantStack(const MutantStack &original);
			~MutantStack();
			
			MutantStack &operator = (const MutantStack &m);

			typedef	typename std::stack<T>::container_type::iterator iterator;
			typedef	typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
			typedef typename std::stack<T>::container_type::const_iterator const_iterator;
			typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
			
			iterator begin();
			iterator end();

			reverse_iterator rbegin();
			reverse_iterator rend();
			
			const_iterator cbegin() const;
			const_iterator cend() const;

			const_reverse_iterator crbegin() const;
			const_reverse_iterator crend() const;
};

#include "MutantStack.tpp"