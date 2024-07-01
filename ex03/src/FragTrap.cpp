/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 16:45:20 by lannur-s          #+#    #+#             */
/*   Updated: 2024/06/28 16:45:20 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap ( name) 
{
	hitPoints = FT_HIT_POINTS;
	energyPoints = FT_ENERGY_POINTS;
	attackDamage = FT_ATTACK_DAMAGE;
	std::cout << "FragTrap " << name << "   | is born " << " |           |     " 
		<< this->hitPoints  << "     |      " 
		<< this->energyPoints  << "      |    " 
		<< this->attackDamage << std::endl;
}

FragTrap::FragTrap(FragTrap const &other): ClapTrap ( other)
{
	*this = other;
	std::cout << "FragTrap " << name << " is copied" << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& other )
{
	std::cout << "FragTrap " << name << " is copied from "
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

FragTrap::~FragTrap() { std::cout << "FragTrap " << name << " is destroyed" << std::endl; }

void	FragTrap::highFivesGuys(void) { std::cout << "FragTrap " << name << " is asking high five!" << std::endl; }
