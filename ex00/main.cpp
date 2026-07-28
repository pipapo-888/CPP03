/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:16:52 by knomura           #+#    #+#             */
/*   Updated: 2026/07/28 16:02:29 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "----- basic behavior -----" << std::endl;
	ClapTrap a("Alpha");
	a.attack("Beta");
	a.takeDamage(3);
	a.beRepaired(2);

	std::cout << "\n----- energy points reach 0 -----" << std::endl;
	ClapTrap b("Bravo");
	for (int i = 0; i < 12; i++)
		b.attack("Dummy");

	std::cout << "\n----- hit points reach 0 -----" << std::endl;
	ClapTrap c("Charlie");
	c.takeDamage(100);
	c.attack("Dummy");
	c.beRepaired(5);

	std::cout << "\n----- default constructor -----" << std::endl;
	ClapTrap d;
	d.attack("Dummy");

	std::cout << "\n----- copy constructor / assignment -----" << std::endl;
	ClapTrap e("Echo");
	e.takeDamage(4);
	ClapTrap f(e);
	f.attack("Dummy");
	ClapTrap g("Golf");
	g = e;
	g.attack("Dummy");

	std::cout << "\n----- end of main -----" << std::endl;
	return (0);
}