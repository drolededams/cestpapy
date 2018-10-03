/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:18:22 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/03 13:28:56 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {

public:
	HumanB (std::string name);


	void		attack(void);
	void		setWeapon(Weapon& weapon);

private:
	std::string	_name;
	Weapon		*_weapon;
};

#endif
