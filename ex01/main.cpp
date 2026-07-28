/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:16:52 by knomura           #+#    #+#             */
/*   Updated: 2026/07/28 18:59:46 by knomura          ###   ########.fr       */
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
	
	std::cout << "------------Main END------------\n";

	return (0);
}