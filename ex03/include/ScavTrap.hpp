/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 09:02:48 by lannur-s          #+#    #+#             */
/*   Updated: 2024/06/28 09:02:48 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define ST_HIT_POINTS		100
#define ST_ENERGY_POINTS	50
#define ST_ATTACK_DAMAGE	20

// Inheritance - ClapTrap is a base class, ScavTrap is a derived class
// virtual keyword - prevents multiple instances of ClapTrap in ScavTrap,
// ensuring correct object construction
class	ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &other );
		ScavTrap	&operator=( const ScavTrap &other );
		~ScavTrap();

		void	attack( const std::string &target );
		void	guardGate();
};

#endif
