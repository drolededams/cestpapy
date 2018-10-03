/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 13:38:49 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/03 16:53:24 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main (void)
{
	srand (time(NULL));
	Zombie* zombie1 = new Zombie("Alfred", "Spider");
	zombie1->announce();

	ZombieEvent* zombieevent1 = new ZombieEvent();
	zombieevent1->setZombieType("Horse");
	
	Zombie* zombie2 = zombieevent1->newZombie("Mia");
	zombie2->announce();
	
	Zombie* zombie3 = zombieevent1->randomChump();
	Zombie* zombie4 = zombieevent1->randomChump();
	delete(zombie1);
	delete(zombie2);
	delete(zombie3);
	delete(zombie4);
	return (1);
}
