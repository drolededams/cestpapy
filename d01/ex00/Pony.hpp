/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:43:25 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/02 12:16:28 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <iomanip>

class	Pony {

public:

	Pony(std::string name);
	~Pony(void);

	static Pony*	ponyOnTheHeap(std::string name);
	static Pony		ponyOnTheStack(std::string name);

private:

	std::string _name;

};
#endif
