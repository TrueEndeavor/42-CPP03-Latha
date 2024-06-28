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

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = HIT_POINTS;
	this->energyPoints = ENERGY_POINTS;
	this->attackDamage = ATTACK_DAMAGE;
	std::cout << "Claptrap " << this->name << "   | is born " << " |           |     " 
		<< this->hitPoints  << "      |      " 
		<< this->energyPoints  << "      |    " 
		<< this->attackDamage << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other) 
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;    
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
		std::cout << "ClapTrap " << this->name << " is copied" << std::endl;
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
	std::cout << name << "            |  damaged " << "|    " 
		<<  "   "  << "    |      " << this->hitPoints  << "     |      " 
		<< this->energyPoints  << "      |    " 
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
	std::cout << name << "            | repaired " << "|    " 
		<<  "   "  << "    |      " << this->hitPoints  << "     |      " 
		<< this->energyPoints  << "      |    " 
		<< this->attackDamage << std::endl;
}
