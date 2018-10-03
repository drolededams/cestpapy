/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:59:39 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/03 12:02:28 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	return;
}

Brain::~Brain(void)
{
	return;
}

std::string	Brain::identify(void) const
{
	const void * address = static_cast<const void*>(this);
	std::stringstream ss;
	ss << address;  
	std::string str = ss.str(); 
	
	return(str);
}
