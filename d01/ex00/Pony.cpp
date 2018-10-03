/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:43:20 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/02 12:23:21 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


Pony::Pony(std::string name) : _name(name)
{
	std::cout << this->_name << " is born." << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Goodbye " << this->_name << "." << std::endl;
}

Pony* Pony::ponyOnTheHeap(std::string name)
{
	return (new Pony(name));
}

Pony	Pony::ponyOnTheStack(std::string name)
{
	return (Pony(name));
}
