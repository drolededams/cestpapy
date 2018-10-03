/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:51:42 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/02 17:58:14 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string* ptr = &str;
	std::string& ref = str;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;

	return (1);
}
