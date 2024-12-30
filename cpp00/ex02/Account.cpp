/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 12:36:10 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/30 15:19:29 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


void Account::_displayTimestamp()
{
	time_t	now = std::time(NULL);
	char buff[80];
	std::strftime(buff, 20, "%Y%m%d_%H%M%S",std::localtime(&now));
	std::cout << "[" << buff << "] ";
}

Account::Account(int deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = deposit;
	_totalAmount += deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout	<< "index:"		<< _accountIndex
				<< ";amount:"	<< _amount
				<< ";created"	<< std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout	<< "index:"		<< _accountIndex
				<< ";amount:"	<< _amount
				<< ";closed"	<< std::endl;
}

int	Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount(){
	return _totalAmount;
}

int	Account::getNbDeposits(){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout	<< "accounts:"		<< _nbAccounts
				<< ";total:"		<< _totalAmount
				<< ";deposits:"		<< _totalNbDeposits
				<< ";withdrawals:"	<< _totalNbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_amount += deposit;
	
	_totalNbDeposits++;
	_totalAmount += deposit;

	_displayTimestamp();
	std::cout	<< "index:"			<< _accountIndex
				<< ";p_amount:"		<< _amount - deposit
	  			<< ";deposit:"		<< deposit
				<< ";amount:"		<< _amount
				<< ";nb_deposits:"	<< _nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (withdrawal > _amount)
	{
		std::cout	<< "index:"		<< _accountIndex
					<< ";p_amount:"	<< _amount
					<< ";withdrawal"
					<< ":refused"	<< std::endl;
		return (false);
	}
	else
	{
		_amount -= withdrawal;
		_nbWithdrawals++;

		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;

		std::cout	<< "index:"			<< _accountIndex
					<< ";p_amount:"		<< _amount + withdrawal
					<< ";withdrawal:"	<< withdrawal
					<< ";amount:"		<< _amount
					<< ";nb_withdrawals:"<< _nbWithdrawals
					<< std::endl;
		return (true);
	}
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout	<< "index:"			<< _accountIndex
				<< ";amount:"		<< _amount
				<< ";deposits:"  	<< _nbDeposits
				<< ";withdrawals:"	<< _nbWithdrawals
				<< std::endl;
}
