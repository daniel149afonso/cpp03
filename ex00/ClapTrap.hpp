/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:23:48 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/01 20:00:15 by daniel149af      ###   ########.fr       */
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
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& other);
		ClapTrap& operator=(ClapTrap& other);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
  
		int get_hit_pts();
		int get_energy_pts();
};

#endif
