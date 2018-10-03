/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:19:00 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/03 13:14:21 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return;
}

std::string const&	Weapon::getType(void) const
{
	return (this->_type);
}
