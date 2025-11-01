/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:20:57 by daniel149af       #+#    #+#             */
/*   Updated: 2025/10/31 18:09:47 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("Goku", 5, 3, 2);
	ClapTrap b("Vegeta", 5, 3, 2);

	a.attack("Vegeta");
	b.takeDamage(2);
	b.beRepaired(1);
	a.attack("Vegeta");
	b.takeDamage(2);
	b.beRepaired(1);
	a.attack("Vegeta");
	b.takeDamage(2);
	a.attack("Vegeta");
	b.takeDamage(2);
	return (0);
}