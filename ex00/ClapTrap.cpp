/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:16:52 by knomura           #+#    #+#             */
/*   Updated: 2026/07/28 16:08:47 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &obj) : _name(obj._name), _hitPoints(obj._hitPoints), _energyPoints(obj._energyPoints), _attackDamage(obj._attackDamage)
{
	std::cout << "Copy constructor called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

bool ClapTrap::canMove() const
{
	if (_hitPoints <= 0)
	{
		std::cout << "Not enough HP\n";
		return false;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "Not Enough EP\n";
		return false;
	}
	return true;
}

void ClapTrap::attack(const std::string &target)
{
	if (!canMove())
		return ;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!canMove())
		return;
	_energyPoints--;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " repairs itself!\n";
}