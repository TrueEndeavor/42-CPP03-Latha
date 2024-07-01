/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:46:55 by lannur-s          #+#    #+#             */
/*   Updated: 2024/05/09 17:46:55 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cstdlib>

/* 
  Ex01: Serena, my love!
  
  This exercise intends learnig inheritance and polymorphism by creating a derived class
  ScavTrap from ClapTrap, demonstrating constructor/destructor chaining, 
  and overriding methods.
  
  attack function     :               |  energyPoint--
  takeDamage function : hitPoint-x    |
  beRepaired function : hitPoints+x   |  energyPoint--
*/

#include "ScavTrap.hpp"

int	main()
{
	system("clear");
	std::cout << "-----------------|----------|-----------|-------------|--------------|-------------" << std::endl;	
	std::cout << "Name             | Action   |  Target   |  hitPoints  | energyPoints | attackDamage" << std::endl;
	std::cout << "-----------------|----------|-----------|-------------|--------------|-------------" << std::endl;
	// Creating ScavTrap object
	ScavTrap scavtrap1("Gamma");
	std::cout << "-----------------|----------|-----------|-------------|--------------|-------------" << std::endl;
	
	// Testing ScavTrap functionalities
	scavtrap1.attack("Alpha");
	scavtrap1.takeDamage(15);
	scavtrap1.beRepaired(10);
	std::cout << "-----------------|----------|-----------|-------------|--------------|-------------" << std::endl;
	scavtrap1.guardGate();
}