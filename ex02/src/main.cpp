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

#include "FragTrap.hpp"

int	main()
{
	system("clear");
	std::cout << "---------------|----------|-----------|-------------|--------------|-------------" << std::endl;	
	std::cout << "Name           | Action   |  Target   |  hitPoints  | energyPoints | attackDamage" << std::endl;
	std::cout << "---------------|----------|-----------|-------------|--------------|-------------" << std::endl;
	// Creating ScavTrap object
	FragTrap fragtrap1("FT1");
	std::cout << "---------------|----------|-----------|-------------|--------------|-------------" << std::endl;
	
	// Testing FragTrap functionalities
	std::cout << "---------------|----------|-----------|-------------|--------------|-------------" << std::endl;
	fragtrap1.highFivesGuys();
}