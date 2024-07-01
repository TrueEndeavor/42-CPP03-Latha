/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 16:37:45 by lannur-s          #+#    #+#             */
/*   Updated: 2024/06/28 16:37:45 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap ( name + "_clap_name" ), ScavTrap ( name ), FragTrap ( name )
{
	std::cout << "DiamondTrap constructor called" << std::endl;

	this->name = ClapTrap::name;
	this->FragTrap::hitPoints = FT_HIT_POINTS;
	this->ScavTrap::energyPoints = ST_ENERGY_POINTS;
	this->FragTrap::attackDamage = FT_ATTACK_DAMAGE;
}

DiamondTrap::~DiamondTrap() { std::cout << "DiamondTrap " << name << " is destroyed" << std::endl; }

DiamondTrap::DiamondTrap( const DiamondTrap& other ) : ClapTrap( other ), ScavTrap( other ), FragTrap( other )
{
	std::cout << "DiamondTrap copy constructor called" <<  std::endl;
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other )
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

void	DiamondTrap::attack( const std::string &target )
{
	this->ScavTrap::attack( target );
}
void	DiamondTrap::whoAmI(void) { std::cout << "whoAmI" << "DiamondTrap :" << name << " is asking high five!" << std::endl; }
