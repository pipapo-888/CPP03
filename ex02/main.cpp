/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:16:52 by knomura           #+#    #+#             */
/*   Updated: 2026/07/29 13:36:48 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

static void testClapTrap()
{
	std::cout << "\n----- ClapTrap -----\n";
	ClapTrap clap("Clappy");

	clap.attack("Target");
	clap.takeDamage(5);
	clap.beRepaired(2);

	ClapTrap clapCopy(clap);
	ClapTrap clapAssigned;
	clapAssigned = clap;

	for (int i = 0; i < 11; i++)
		clap.takeDamage(1);
	clap.attack("Target");
	clap.beRepaired(1);
}

static void testScavTrap()
{
	std::cout << "\n----- ScavTrap -----\n";
	ScavTrap scav("Scavvy");

	scav.attack("Target");
	scav.guardGate();
	scav.takeDamage(30);
	scav.beRepaired(10);

	ScavTrap scavCopy(scav);
	ScavTrap scavAssigned;
	scavAssigned = scav;

	for (int i = 0; i < 50; i++)
		scav.attack("Target");
	scav.attack("Target");
}

static void testFragTrap()
{
	std::cout << "\n----- FragTrap -----\n";
	FragTrap frag("Fraggy");

	frag.attack("Target");
	frag.highFivesGuys();
	frag.takeDamage(40);
	frag.beRepaired(10);

	FragTrap fragCopy(frag);
	FragTrap fragAssigned;
	fragAssigned = frag;

	for (int i = 0; i < 100; i++)
		frag.beRepaired(1);
	frag.takeDamage(1000);
	frag.attack("Target");
	frag.highFivesGuys();
}

static void testNonVirtualDispatch()
{
	std::cout << "\n----- attack() is not virtual: dispatch via ClapTrap& -----\n";
	ScavTrap scav("PolyScav");
	FragTrap frag("PolyFrag");
	ClapTrap &scavAsClap = scav;
	ClapTrap &fragAsClap = frag;

	scavAsClap.attack("Target");
	fragAsClap.attack("Target");
}

int main()
{
	testClapTrap();
	testScavTrap();
	testFragTrap();
	testNonVirtualDispatch();

	return (0);
}
