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
  
  attack function - decreases eneryPoint by 1
  takeDamage function - decreases hitPoint by x
  beRepaired function - decreases energyPoint by 1, increases hitPoints by x
*/

int main()
{
	system("clear");
	std::cout << "------|----------|-----------|-------------|--------------|-------------" << std::endl;	
	std::cout << "Name  | Action   |  Target   |  hitPoints  | energyPoints | attackDamage" << std::endl;
	std::cout << "------|----------|-----------|-------------|--------------|-------------" << std::endl;
	// Creating ClapTrap objects
	ClapTrap claptrap1("CT1");
	ClapTrap claptrap2("CT2");

	// Testing Simulate an Attack on a Target
	claptrap1.attack("CT2");
	claptrap2.attack("CT1");

	// Testing Receive and Process Damage
	claptrap1.takeDamage(3);
	claptrap2.takeDamage(5);

	// Testing Repair and Restore Hit Points
	claptrap1.beRepaired(2);
	claptrap2.beRepaired(4);

	// Testing edge cases
	claptrap1.takeDamage(15); // CT1 should be destroyed
	claptrap1.attack("CT2"); // CT1 should not be able to attack
	claptrap1.beRepaired(5); // CT1 should not be able to be repaired
	return 0;
}
