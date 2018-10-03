/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 12:27:07 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/03 16:53:27 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	if (!type.length())
		this->type = "NULL";
	else
		this->type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name, this->type);
	return (zombie);
}

Zombie*	ZombieEvent::randomChump(void)
{

	int r;
	std::string names[4]; 
	names[0] = "Sabine"; 
	names[1] = "Florentin";
	names[2] = "Guimauve";
	names[3] = "Elastik";
	r = rand() % 4;
	Zombie* zombie = this->newZombie(names[r]);
	zombie->announce();
	return(zombie);
}
