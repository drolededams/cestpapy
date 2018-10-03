/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:43:27 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/03 16:04:47 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int	main(void)
{

	Pony bob = Pony::ponyOnTheStack("Bob");
	Pony* jim = Pony::ponyOnTheHeap("Jim");

	delete (jim);
	return (0);
}
