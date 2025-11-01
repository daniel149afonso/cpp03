/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:20:57 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/01 19:46:26 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	play_fight(ClapTrap& a, ClapTrap& b)
{
	if (a.get_energy_pts() > 0 && b.get_hit_pts() > 0)
	{
		a.attack("Vegeta");
		b.takeDamage(2);
	}	
	b.beRepaired(1);
	if (a.get_energy_pts() > 0 && b.get_hit_pts() > 0)
	{
		a.attack("Vegeta");
		b.takeDamage(2);
	}
	b.beRepaired(1);
	if (a.get_energy_pts() > 0 && b.get_hit_pts() > 0)
	{
		a.attack("Vegeta");
		b.takeDamage(2);
	}
	if (a.get_energy_pts() > 0 && b.get_hit_pts() > 0)
	{
		a.attack("Vegeta");
		b.takeDamage(2);
	}
	if (a.get_energy_pts() > 0 && b.get_hit_pts() > 0)
	{
		a.attack("Vegeta");
		b.takeDamage(2);
	}
	if (a.get_energy_pts() > 0 && b.get_hit_pts() > 0)
	{
		a.attack("Vegeta");
		b.takeDamage(2);
	}
}

int	main()
{
	ClapTrap a("Goku", 4, 4, 2);
	ClapTrap b("Vegeta", 4, 3, 2);

	play_fight(a, b);
	return (0);
}