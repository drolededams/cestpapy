/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:48:58 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/02 17:49:07 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

class	ZombieHorde {

public:

	ZombieHorde(int n);
	~ZombieHorde(void);
	
	void announce(void);
	
	int n;
	Zombie *zombies;
};

#endif
