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
  
  This exercise intends for the ClapTrap class to simulate interactions without 
  directly maintaining the state of other ClapTrap objects.
  
  attack function - decreases eneryPoint by 1
  takeDamage function - decreases hitPoint by x
  beRepaired function - decreases energyPoint by 1, increases hitPoints by x
*/

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	//ClapTrap claptrap("CT1");
	//ScavTrap scavtrap("ST1");
	//FragTrap fragtrap("FR1");
	DiamondTrap diamondtrap("DMND1");

	/*claptrap.attack("target");
	claptrap.takeDamage(3);
	claptrap.beRepaired(5);

	scavtrap.attack("target");
	scavtrap.takeDamage(15);
	scavtrap.beRepaired(20);
	scavtrap.guardGate();

	fragtrap.attack("target");
	fragtrap.takeDamage(20);
	fragtrap.beRepaired(30);
	fragtrap.highFivesGuys();*/

	diamondtrap.attack("target");
	diamondtrap.takeDamage(25);
	diamondtrap.beRepaired(35);
	diamondtrap.whoAmI();

	return 0;
}