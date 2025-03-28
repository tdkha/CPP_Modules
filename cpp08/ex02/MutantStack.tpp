/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:19:48 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/28 16:14:08 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T> MutantStack<T>::MutantStack(){}
template <typename T> MutantStack<T>::MutantStack(const MutantStack &org): std::stack<T>(org) {}
template <typename T> MutantStack<T>::~MutantStack(){}

template<typename T> MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &org)
{
	if (this != &org)
	{
		std::stack<T>::operator=(org);
	}
	return *this;
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::begin()				{return this->c.begin();}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::end()				{return this->c.end();}

template <typename T> typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()	{return this->c.rbegin();}

template <typename T> typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() 		{return this->c.rend();}



template <typename T> typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const			{return this->c.cbegin();}

template <typename T> typename MutantStack<T>::const_iterator MutantStack<T>::cend() const				{return this->c.cend();}

template <typename T> typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const	{return this->c.crbegin();}

template <typename T> typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const		{return this->c.crend();}