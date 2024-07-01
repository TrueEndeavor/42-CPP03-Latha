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
  Ex03: Now it’s weird!
  
  The intention of this exercise is to create a DiamondTrap class that inherits from 
  both FragTrap and ScavTrap, combining their attributes and methods, including a 
  unique method whoAmI to display its own and its ClapTrap name. This exercise emphasizes
  multiple inheritance and handling name shadowing.
*/

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	DiamondTrap diamondtrap("diamond");
	diamondtrap.attack("target");
	diamondtrap.takeDamage(25);
	diamondtrap.beRepaired(35);
	diamondtrap.whoAmI();
	return 0;
}