/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:20:57 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/03 18:25:44 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

void	play_ClapTrap_fight()
{
	std::cout << "\n\n### TESTING CLAPTRAP ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	ClapTrap a("Goku");
	ClapTrap b("Vegeta");
	std::cout << "\033[34mFighting\033[0m" << std::endl;
	for (int i = 0; i < 7; i++)
	{
		if (a.get_energy_pts() > 0 && b.get_hit_pts() > 0)
		{
			a.attack("Vegeta");
			b.takeDamage(2);
		}
		if (i < 2)
			b.beRepaired(1);
	}
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
}

void	play_ScavTrap_fight()
{
	std::cout << "\n\n### TESTING SCAVTRAP ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	ScavTrap a("Gon");
	ScavTrap b("Killua");
	std::cout << "\033[34mFighting\033[0m" << std::endl;
	for (int i = 0; i < 7; i++)
	{
		if (a.get_energy_pts() > 0 && b.get_hit_pts() > 0)
		{
			a.attack("Killua");
			b.takeDamage(20);
		}
		if (i < 2)
		{
			b.beRepaired(1);
			a.guardGate();
		}
	}
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
}

int	main()
{
	play_ClapTrap_fight();
	play_ScavTrap_fight();
	return (0);
}