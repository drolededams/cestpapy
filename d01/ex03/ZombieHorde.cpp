/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:48:55 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/03 17:01:57 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

std::string randomNames(void)
{
	int r;
	std::string names[4]; 
	names[0] = "Sabine"; 
	names[1] = "Florentin";
	names[2] = "Guimauve";
	names[3] = "Elastik";

	r = rand() % 4;
	return(names[r]);
}

ZombieHorde::ZombieHorde(int n) : n(n)
{
	int i;
	i = 0;

	this->zombies = new Zombie[n];
	while (i < n)
	{
		this->zombies[i].name = randomNames();
		i++;
	}
	return;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->zombies;
	return;
}

void	ZombieHorde::announce(void)
{
	int i;

	i = 0;
	while (i < this->n)
	{
		this->zombies[i].announce();
		i++;
	}
}
