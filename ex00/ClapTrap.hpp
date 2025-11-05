/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:23:48 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/03 17:25:22 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <iostream>

class ClapTrap {

	private:
		std::string _name;
		int _hit_pts;
		int _energy_pts;
		int _attack_dmg;

	public:
		ClapTrap(); // Default constructor
		ClapTrap(std::string name); // Constructor with parameters
		ClapTrap(ClapTrap& other); // Copy constructor
		ClapTrap& operator=(ClapTrap& other); // Copy assignement operator
		~ClapTrap(); // Destructor

		// Public methods
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		// Getters
		int get_hit_pts() const;
		int get_energy_pts() const;
};

#endif
