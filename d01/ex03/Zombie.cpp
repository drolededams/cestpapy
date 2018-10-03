/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 12:27:02 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/03 16:35:01 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->type = "Normal";
	return;
}

Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
	return;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> Coucou !" << std::endl;
}
