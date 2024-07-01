/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 16:37:07 by lannur-s          #+#    #+#             */
/*   Updated: 2024/06/28 16:37:07 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string			name;

	public:
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &other );
		DiamondTrap	&operator=( const DiamondTrap &other );
		~DiamondTrap();

		void	attack( const std::string &target );
		void	whoAmI();
};

#endif
