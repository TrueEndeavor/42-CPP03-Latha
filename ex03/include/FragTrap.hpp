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

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define FT_HIT_POINTS		100
#define FT_ENERGY_POINTS	100
#define FT_ATTACK_DAMAGE	30

// Inheritance - ClapTrap is a base class, ScavTrap is a derived class
// virtual keyword - prevents multiple instances of ClapTrap in ScavTrap,
// ensuring correct object construction
class	FragTrap: virtual public ClapTrap
{
	public:
		FragTrap( std::string name );
		FragTrap( const FragTrap &other );
		FragTrap	&operator=( const FragTrap &other );
		~FragTrap();

		void	highFivesGuys( void );
};

#endif
