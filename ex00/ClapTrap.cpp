/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:25:22 by daniel149af       #+#    #+#             */
/*   Updated: 2025/10/29 02:11:15 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap(): _name("unknown"), _hit_pts(10), _energy_pts(10), _attack_dmg(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& n)
{
	_name= n._name;
	_hit_pts = n._hit_pts;
	_energy_pts = n._energy_pts;
	_attack_dmg = n._attack_dmg;
	std::cout << "Copy constructor called" << std::endl;
}
	
	
ClapTrap& ClapTrap::operator=(ClapTrap& n)
{
	if (this != &n)
	{
		_name= n._name;
		_hit_pts = n._hit_pts;
		_energy_pts = n._energy_pts;
		_attack_dmg = n._attack_dmg;
	}
	std::cout << "Copy constructor called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called"<<std::endl;
}
	
void attack(const std::string& target)
{
	"ClapTrap <name> attacks <target>, causing <damage> points of damage!\n";
}
void takeDamage(unsigned int amount)
{
	
}

void beRepaired(unsigned int amount)
{
	
}