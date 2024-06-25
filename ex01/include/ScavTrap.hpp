/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 20:54:04 by lannur-s          #+#    #+#             */
/*   Updated: 2024/06/22 20:54:04 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"

#define RED "\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define GREY "\033[0;90m"
#define RESET "\033[0m"

#define ST_HIT_POINTS		100
#define ST_ENERGY_POINTS	50
#define ST_ATTACK_DAMAGE	20

// Inheritance - ClapTrap is a base class, ScavTrap is a derived class
// virtual keyword - prevents multiple instances of ClapTrap in ScavTrap,
// ensuring correct object construction
class	ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( const ClapTrap &other );
		ScavTrap&	operator=( const ClapTrap &other );
		~ScavTrap();

		ScavTrap( std::string name );

		void	attack(const std::string& target);
		void	guardGate(const std::string& target);
};

#endif
