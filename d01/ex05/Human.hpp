/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:59:49 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/03 12:05:22 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>
#include "Brain.hpp"

class Human {

public:
	
	Human(void);
	~Human(void);
	
	
	Brain const	brain;

	std::string	identify(void);
	Brain const&		getBrain(void);
};


#endif
