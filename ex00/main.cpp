/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:20:57 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/03 16:50:49 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	play_fight(ClapTrap& a, ClapTrap& b)
{
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

int	main()
{
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	ClapTrap a("Goku");
	ClapTrap b("Vegeta");

	play_fight(a, b);
	return (0);
}