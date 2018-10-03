/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 13:37:27 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/03 15:39:38 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

std::string SearchReplace(std::string str, std::string const search, std::string const replace)
{
	size_t pos = 0;
	while ((pos = str.find(search, pos)) != std::string::npos)
	{
		str.replace(pos, search.length(), replace);
		pos += replace.length();
    }
    return str;
}


int	main(int argc, char *argv[])
{
	std::string str;
	std::string filename;
	std::ostringstream ss;
	if (argc != 4)
		std::cout << "3 args needed." << std::endl;
	else
	{
		filename = argv[1];
		std::ifstream ifile(filename);
		if (ifile.is_open())
		{
				ss << ifile.rdbuf();
				ifile.close();
				str = ss.str();
				str = SearchReplace(str, argv[2], argv[3]);
				std::transform(filename.begin(), filename.end(), filename.begin(), ::toupper);
				std::ofstream ofile(filename + ".replace");
				if (ofile.is_open())
				{	ofile << str;
					ofile.close();
				}
				else
					std::cout << "Cant open the file." << std::endl;
		}
		else
			std::cout << "Bad file." << std::endl;
	}

	return (1);
}
