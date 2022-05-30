/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 03:08:05 by slahrach          #+#    #+#             */
/*   Updated: 2022/05/29 21:21:27 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Account.hpp"

Account::Account(int initial_deposit)
{
	Account::_nbAccounts++;
	this->_accountIndex = Account::_nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	struct std::tm when;
	std::get_time(&when, "%R");
	std::cout << "[" << when.tm_hour << "_" << when.tm_min << "] ";
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_nbDeposits++;
	this->_amount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
	Account::_totalNbDeposits++;
	Account::_totalAmount += this->_amount;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	if (this->_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return(0) ;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= this->_amount;
	return (1);
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;