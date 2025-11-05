/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:25:22 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/04 14:44:13 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

// Default Constructor
FragTrap::FragTrap(): ClapTrap()
{
	_name = "unknown";
	_hit_pts = 100;
	_energy_pts = 100;
	_attack_dmg = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;	
}

// Constructor with parameters
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_name = name;
	_hit_pts = 100;
	_energy_pts = 100;
	_attack_dmg = 30;
	std::cout << "FragTrap " << _name << " Constructor called" << std::endl;
}

// Copy constructor
FragTrap::FragTrap(FragTrap& n): ClapTrap(n)
{
	_name = n._name;
	_hit_pts = n._hit_pts;
	_energy_pts = n._energy_pts;
	_attack_dmg = n._attack_dmg;
	std::cout << "FragTrap "<< _name << " Constructor called" << std::endl;
}

// Copy assignement operator
FragTrap& FragTrap::operator=(FragTrap& n)
{
	if (this != &n)
	{
		_name = n._name;
		_hit_pts = n._hit_pts;
		_energy_pts = n._energy_pts;
		_attack_dmg = n._attack_dmg;
	}
	std::cout << "FragTrap " << _name << " assignement operator called" << std::endl;
	return (*this);
}

// Destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " Destructor called"<<std::endl;
}

// Public methods
void FragTrap::attack(const std::string& target)
{
	if (_energy_pts <= 0 || _hit_pts <= 0)
		return ;
	_energy_pts--;
	std::cout << "FragTrap " << _name << " attacks "<< target 
	<< ", causing " << _attack_dmg << " points of damage!\n";
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << _name << " does a high Fives.\n";
}
