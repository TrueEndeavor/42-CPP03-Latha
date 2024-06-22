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

ClapTrap::ClapTrap() : name ( NULL ) { }

ClapTrap::ClapTrap( const ClapTrap& other )
{	
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	return (*this);
}

ClapTrap::ClapTrap(std::string name) { this->name = name; }

ClapTrap::~ClapTrap() { std::cout << "Destructor called" << std::endl; }


/**************************** Printing the value *****************************/

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

/*****************************************************************************/