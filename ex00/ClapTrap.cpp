/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:16:52 by knomura           #+#    #+#             */
/*   Updated: 2026/07/27 00:19:55 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &obj) : _hitPoints(obj._hitPoints), _energyPoints(obj._energyPoints), _attackDamage(obj._attackDamage)
{
	std::cout << "Copy constructor called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::attack(const std::string &target)
{

	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	
}


void ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
}