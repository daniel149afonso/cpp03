/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:23:48 by daniel149af       #+#    #+#             */
/*   Updated: 2025/10/29 01:56:40 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <iostream>

class ClapTrap
{
private:
	std::string _name;
	int _hit_pts = 10;
	int _energy_pts = 10;
	int _attack_dmg = 0;
public:
	ClapTrap();
	ClapTrap(int hit_pts, int energy_pts, int attack_dmg);
	ClapTrap(ClapTrap& other);
	ClapTrap& operator=(ClapTrap& other);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
