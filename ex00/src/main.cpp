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
  Ex00: Aaaaand... OPEN!
  
  This exercise intends for the ClapTrap class to simulate interactions without 
  directly maintaining the state of other ClapTrap objects.
  
  attack function     :               |  energyPoint--
  takeDamage function : hitPoint-x    |
  beRepaired function : hitPoints+x   |  energyPoint--
*/

int main()
{
	system("clear");
	std::cout << "------|----------|-----------|-------------|--------------|-------------" << std::endl;	
	std::cout << "Name  | Action   |  Target   |  hitPoints  | energyPoints | attackDamage" << std::endl;
	std::cout << "------|----------|-----------|-------------|--------------|-------------" << std::endl;
	// Creating ClapTrap objects
	ClapTrap Alpha("Alpha");
	ClapTrap Beta("Beta ");

	// Testing Simulate an Attack on a Target
	Alpha.attack("Beta");
	Beta.attack("Alpha");

	// Testing Receive and Process Damage
	Alpha.takeDamage(3);
	Beta.takeDamage(5);

	// Testing Repair and Restore Hit Points
	Alpha.beRepaired(2);
	Beta.beRepaired(10);

	// Testing edge cases
	Alpha.takeDamage(15);
	Alpha.attack("Beta"); // Alpha should not be able to attack
	Alpha.beRepaired(5); // Alpha should not be able to be repaired
	std::cout << "------|----------|-----------|-------------|--------------|-------------" << std::endl;	
	return 0;
}
