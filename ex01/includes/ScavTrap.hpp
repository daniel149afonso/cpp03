/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:23:48 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/01 19:45:41 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public ClapTrap {

	private:
		std::string _name;
		int _hit_pts;
		int _energy_pts;
		int _attack_dmg;

	public:
		ScavTrap();
		ScavTrap(std::string name, int hit_pts, int energy_pts, int attack_dmg);
		ScavTrap(ScavTrap& other);
		ScavTrap& operator=(ScavTrap& other);
		~ScavTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
  
		int get_hit_pts();
		int get_energy_pts();
};

#endif
