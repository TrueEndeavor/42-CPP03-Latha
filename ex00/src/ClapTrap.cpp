/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 21:00:47 by lannur-s          #+#    #+#             */
/*   Updated: 2024/06/22 21:00:47 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/***************** Orthodox Canonical Format (Rule of 3) *********************/

ClapTrap::ClapTrap() : name ( "default" )
{
	hitPoints = HIT_POINTS;
	energyPoints = ENERGY_POINTS;
	attackDamage = ATTACK_DAMAGE;
	std::cout << "ClapTrap " << name << " created with "
				<< hitPoints << " hit points, "
				<< energyPoints << " energy points, and "
				<< attackDamage << " attack damage." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other) 
{
	name = other.name;
	hitPoints = other.hitPoints;    
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
		std::cout << "ClapTrap " << name << " is copied" << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& other )
{
	std::cout << "ClapTrap " << name << " is copied from "
			<< other.name << "\n" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() { std::cout << "ClapTrap " << name << " is destroyed" << std::endl; }

/**************************** Parameterized constructor  *****************************/
ClapTrap::ClapTrap(std::string name): name( name )
{
	hitPoints = HIT_POINTS;
	energyPoints = ENERGY_POINTS;
	attackDamage = ATTACK_DAMAGE;
	std::cout << name << "   | is born " << " |           |     " 
		<< this->hitPoints  << "      |      " 
		<< this->energyPoints  << "      |    " 
		<< this->attackDamage << std::endl;
}

/**************************** Printing the value *****************************/

void	ClapTrap::attack(const std::string &target)
{
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot attack because it has no hit points left!\n";
			return;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot attack because it has no energy points left!\n";
		return;
	}
	energyPoints--;
	std::cout << name << "   |  attacks " << "|    " 
		<<  target  << "    |     " << this->hitPoints  << "      |      " 
		<< this->energyPoints  << "       |    " 
		<< this->attackDamage << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " is already destroyed and cannot take more damage!\n";
		return;
	}
	hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout << name << "   |  damaged " << "|    " 
		<<  "   "  << "    |      " << this->hitPoints  << "      |      " 
		<< this->energyPoints  << "       |    " 
		<< this->attackDamage << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot be repaired because it has no hit points left!\n";
		return;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot be repaired because it has no energy points left!\n";
		return;
	}
	energyPoints--;
	hitPoints += amount;
	std::cout << name << "   | reparied " << "|    " 
		<<  "   "  << "    |      " << this->hitPoints  << "      |      " 
		<< this->energyPoints  << "       |    " 
		<< this->attackDamage << std::endl;
}
