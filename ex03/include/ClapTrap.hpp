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

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <iomanip>

#define RED "\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define GREY "\033[0;90m"
#define RESET "\033[0m"

#define HIT_POINTS		10
#define ENERGY_POINTS	10
#define ATTACK_DAMAGE	0

class	ClapTrap
{
	protected:
		std::string			name;
		int					hitPoints ;
		int					energyPoints;
		int					attackDamage;

	public:
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &other );
		ClapTrap	&operator=( const ClapTrap &other );
		~ClapTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
