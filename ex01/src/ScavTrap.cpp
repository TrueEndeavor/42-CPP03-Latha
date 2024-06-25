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

#include "ScavTrap.hpp"

/***************** Orthodox Canonical Format (Rule of 3) *********************/

ScavTrap::ScavTrap(): ClapTrap()
{
	name = "default";
	hitPoints = ST_HIT_POINTS;
	energyPoints = ST_ENERGY_POINTS;
	attackDamage = ST_ATTACK_DAMAGE;
	std::cout << "ScavTrap " << name << " created with "
				<< hitPoints << " hit points, "
				<< energyPoints << " energy points, and "
				<< attackDamage << " attack damage." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other): ClapTrap ( other)
{
	name = other.name;
	hitPoints = other.hitPoints;    
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
		std::cout << "ClapTrap " << name << " is copied" << std::endl;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& other ) : ClapTrap( other )
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

ScavTrap::~ScavTrap() : ClapTrap { std::cout << "ScavTrap " << name << " is destroyed" << std::endl; }

/**************************** Parameterized constructor  *****************************/
ScavTrap::ScavTrap(std::string name): ClapTrap ( name) : ( name )
{
	hitPoints = ST_HIT_POINTS;
	energyPoints = ST_ENERGY_POINTS;
	attackDamage = ST_ATTACK_DAMAGE;
	std::cout << name << "   | is born " << " |           |     " 
		<< this->hitPoints  << "      |      " 
		<< this->energyPoints  << "      |    " 
		<< this->attackDamage << std::endl;
}

/**************************** Printing the value *****************************/

void	ScavTrap::attack(const std::string &target)
{
	if (hitPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " cannot attack because it has no hit points left!\n";
			return;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " cannot attack because it has no energy points left!\n";
		return;
	}
	energyPoints--;
	std::cout << name << "   |  attacks " << "|    " 
		<<  target  << "    |     " << this->hitPoints  << "      |      " 
		<< this->energyPoints  << "       |    " 
		<< this->attackDamage << std::endl;
}

void	ScavTrap::guardGate(void) const { std::cout << "ScavTrap " << _name << " is guarding the gate!" << std::endl; }    