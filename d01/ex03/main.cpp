/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:49:02 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/03 17:02:44 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main (void)
{
	srand (time(NULL));
	ZombieHorde *test = new ZombieHorde(5);
	ZombieHorde *test2 = new ZombieHorde(5);

	std::cout <<  "1ere Hordre" << std::endl;
	test->announce();
	std::cout <<  "2eme Hordre" << std::endl;
	test2->announce();

	delete test;
	delete test2;

	return (0);
}
