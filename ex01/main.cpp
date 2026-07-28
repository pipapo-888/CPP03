/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:16:52 by knomura           #+#    #+#             */
/*   Updated: 2026/07/28 19:50:53 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap p1;
	ScavTrap p2("banana");

	p1.attack("pen");
	p1.guardGate();

	p2.attack("pen");
	p2.guardGate();
	p2.takeDamage(60);

	ScavTrap p3 = p2;
	p3.beRepaired(5);
	p3.takeDamage(60);
	p3.attack("p2");
	
	std::cout << "------------Main END------------\n";

	return (0);
}