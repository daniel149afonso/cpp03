/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:25:22 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/03 17:33:30 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

// Default Constructor
ClapTrap::ClapTrap(): _name("unknown"), _hit_pts(10), _energy_pts(10), _attack_dmg(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;	
}

// Constructor with parameters
ClapTrap::ClapTrap(std::string name): _name(name), _hit_pts(10), _energy_pts(10), _attack_dmg(0)
{
	std::cout << "ClapTrap " << _name << " Constructor called" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(ClapTrap& n)
{
	_name= n._name;
	_hit_pts = n._hit_pts;
	_energy_pts = n._energy_pts;
	_attack_dmg = n._attack_dmg;
	std::cout << "ClapTrap "<< _name << " Constructor called" << std::endl;
}

// Copy assignement operator
ClapTrap& ClapTrap::operator=(ClapTrap& n)
{
	if (this != &n)
	{
		_name= n._name;
		_hit_pts = n._hit_pts;
		_energy_pts = n._energy_pts;
		_attack_dmg = n._attack_dmg;
	}
	std::cout << "ClapTrap " << _name << " assignement operator called" << std::endl;
	return (*this);
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " Destructor called"<<std::endl;
}

// Public methods
void ClapTrap::attack(const std::string& target)
{
	if (_energy_pts <= 0 || _hit_pts <= 0)
		return ;
	_energy_pts--;
	std::cout << "ClapTrap " << _name << " attacks "<< target 
	<< ", causing " << _attack_dmg << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_pts <= 0)
		return ;
	_hit_pts -= amount;
	if (_hit_pts <= 0)
	{
		_hit_pts = 0;
		std::cout << "ClapTrap " << _name << " is K.O.\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " has " << _hit_pts << " hit points!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_pts <= 0 || _hit_pts <= 0)
		return ;
	_hit_pts += amount;
	_energy_pts--;
	std::cout << "ClapTrap " << _name << " repairs +" << _hit_pts << " hit points!\n";
}

// Getters
int ClapTrap::get_hit_pts()
{
	return(_hit_pts);
}
int ClapTrap::get_energy_pts()
{
	return(_energy_pts);
}
