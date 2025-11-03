/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:25:22 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/03 18:36:11 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

// Default Constructor
ScavTrap::ScavTrap(): ClapTrap()
{
	_name = "unknown";
	_hit_pts = 100;
	_energy_pts = 50;
	_attack_dmg = 20;
	std::cout << "ScavTrap Default Constructor called" << std::endl;	
}

// Constructor with parameters
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_name = name;
	_hit_pts = 100;
	_energy_pts = 50;
	_attack_dmg = 20;
	std::cout << "ScavTrap " << _name << " Constructor called" << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(ScavTrap& n): ClapTrap(n)
{
	_name = n._name;
	_hit_pts = n._hit_pts;
	_energy_pts = n._energy_pts;
	_attack_dmg = n._attack_dmg;
	std::cout << "ScavTrap "<< _name << " Constructor called" << std::endl;
}
// Copy assignement operator
ScavTrap& ScavTrap::operator=(ScavTrap& n)
{
	if (this != &n)
	{
		_name = n._name;
		_hit_pts = n._hit_pts;
		_energy_pts = n._energy_pts;
		_attack_dmg = n._attack_dmg;
	}
	std::cout << "ScavTrap " << _name << " assignement operator called" << std::endl;
	return (*this);
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " Destructor called"<<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_energy_pts <= 0 || _hit_pts <= 0)
		return ;
	_energy_pts--;
	std::cout << "ScavTrap " << _name << " attacks "<< target 
	<< ", causing " << _attack_dmg << " points of damage!\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is in Gate keepper mode.\n";
}
