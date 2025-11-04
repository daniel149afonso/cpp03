/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:23:48 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/04 01:39:48 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap {

	public:
		FragTrap(); // Default constructor
		FragTrap(std::string name); // Constructor with parameters
		FragTrap(FragTrap& other); // Copy constructor
		FragTrap& operator=(FragTrap& other); // Copy assignement operator
		~FragTrap(); // Destructor

		// Public methods
		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif
