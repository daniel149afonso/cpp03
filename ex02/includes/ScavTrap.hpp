/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:23:48 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/03 17:27:13 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public ClapTrap {

	public:
		ScavTrap(); // Default constructor
		ScavTrap(std::string name); // Constructor with parameters
		ScavTrap(ScavTrap& other); // Copy constructor
		ScavTrap& operator=(ScavTrap& other); // Copy assignement operator
		~ScavTrap(); // Destructor

		// Public methods
		void attack(const std::string& target);
		void guardGate();
};

#endif
