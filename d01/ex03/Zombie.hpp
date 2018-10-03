/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 12:27:04 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/03 16:34:53 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <iomanip>

class	Zombie {

public:

	Zombie();
	Zombie(std::string name, std::string type);

	void	announce(void);
	std::string name;
	std::string type;

};

#endif
