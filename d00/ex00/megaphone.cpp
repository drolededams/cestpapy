/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:25:01 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/02 15:02:47 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv){
	int		i;
	std::string str;

	i = 1;
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	}
	else
	{
		while (i < argc - 1)
		{
			str = argv[i];
			std::transform(str.begin(), str.end(),str.begin(), ::toupper);
			std::cout << str;
			i++;
		}
			str = argv[i];
			std::transform(str.begin(), str.end(),str.begin(), ::toupper);
			std::cout << str << std::endl;
	}
	return (1);
}
