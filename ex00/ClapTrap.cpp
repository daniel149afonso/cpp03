/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:25:22 by daniel149af       #+#    #+#             */
/*   Updated: 2025/10/30 16:39:33 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap(): _name("unknown"), _hit_pts(10), _energy_pts(10), _attack_dmg(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(int hit_pts, int energy_pts, int attack_dmg)
{
	_hit_pts = hit_pts;
	_energy_pts = energy_pts;
	_attack_dmg = attack_dmg;
	std::cout << "Constructor with parameters called" << std::endl;
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
	std::cout << "Copy assignement operator called" << std::endl;
	return (*this);
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called"<<std::endl;
}
	
void ClapTrap::attack(const std::string& target)
{
	_energy_pts--;
	std::cout << "ClapTrap " << _name << " attacks "<< target 
	<< ", causing " << _attack_dmg << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hit_pts -= amount;
	std::cout << "ClapTrap " << _name << " has " << _hit_pts << " hit points!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hit_pts += amount;
	_energy_pts--;
	std::cout << "ClapTrap " << _name << " repairs +" << _hit_pts << " hit points!\n";
}
