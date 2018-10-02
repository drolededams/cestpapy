/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 16:21:04 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/02 10:56:16 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"


void	add(Contact *tab) {
	
	Contact contact;
	std::string fields[11];
	std::string data[11];
	std::string str;
	int i;

	if (Contact::getNbContact() == 8)
		std::cout << "8 contacts maximum" << std::endl;
	else
	{
		i = 0;
		fields[0] = "first name:";
		fields[1] = "last name:";
		fields[2] = "nickname:";
		fields[3] = "login:";
		fields[4] = "postal:";
		fields [5] = "email:";
		fields [6] = "phone:";
		fields [7] = "birthday:";
		fields [8] = "meal:";
		fields [9] = "color:";
		fields [10] = "secret:";
		while(i < 11)
		{
			std::cout << fields[i] << std::endl;
			if(std::getline (std::cin, str))
			{
				if (str.length())
				{
					data[i] = str;
					i++;
				}
			}
			else
			{
				std::cout << "error" << std::endl;
				exit(0);
			}
		}

		contact.setFirstname(data[0]);
		contact.setLastname(data[1]);
		contact.setNickname(data[2]);
		contact.setLogin(data[3]);
		contact.setPostal(data[4]);
		contact.setEmail(data[5]);
		contact.setPhone(data[6]);
		contact.setBirthday(data[7]);
		contact.setMeal(data[8]);
		contact.setColor(data[9]);
		contact.setSecret(data[10]);
		i = Contact::getNbContact();
		tab[Contact::getNbContact() - 1] = contact;
	}
	choice(tab);
}

std::string	field(std::string str) {

	std::string dest;
	char buf[11];

	dest = str;
	if (str.length() > 10)
	{
		str.copy(buf, 9, 0);
		buf[9] = '.';
		buf[10] = '\0';
		dest = std::string(buf);
	}
	return (dest);
}

void		print_list(Contact *tab) {

	int i;

	i = 0;
	while(i < Contact::getNbContact())
	{
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << std::to_string(i) << "|";
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << field(tab[i].getFirstname()) << "|";
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << field(tab[i].getLastname()) << "|";
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << field(tab[i].getNickname()) << std::endl;
		i++;
	}
}

void	print_contact(Contact *tab, Contact contact) {
	std::cout << contact.getFirstname() << std::endl;
	std::cout << contact.getLastname() << std::endl;
	std::cout << contact.getNickname() << std::endl;
	std::cout << contact.getLogin() << std::endl;
	std::cout << contact.getPostal() << std::endl;
	std::cout << contact.getEmail() << std::endl;
	std::cout << contact.getPhone() << std::endl;
	std::cout << contact.getBirthday() << std::endl;
	std::cout << contact.getMeal() << std::endl;
	std::cout << contact.getColor() << std::endl;
	std::cout << contact.getSecret() << std::endl;
	choice(tab);
}

void	search(Contact *tab) {
	
	int i;
	std::string str;

	i = -1;
	if (Contact::getNbContact() > 0)
	{
		print_list(tab);
		std::cout  << "Index ?" << std::endl;
		if(std::getline (std::cin, str)){
			try {
				i = std::stoi(str);
			}
			catch (std::invalid_argument& e){
				i = -1;
			}
			catch(std::out_of_range& e){
				i = -1;
			}
		}
		else{
			std::cout << "error" << std::endl;
			exit(0);
		}
		if (i >= 0 && i < Contact::getNbContact())
			print_contact(tab, tab[i]);
		else
		{
			std::cout  << "Bad index" << std::endl;
			search(tab);
		}
	}
	else
	{
		std::cout  << "No contact available" << std::endl;
		choice(tab);
	}
}

void	choice(Contact *tab) {

	std::string str;
	
	std::cout  << "ADD, SEARCH or EXIT ?" << std::endl;
	while (std::getline(std::cin, str)) {
		if (str.compare("ADD") == 0)
			add(tab);
		else if (str.compare("SEARCH") == 0)
			search(tab);
		else if (str.compare("EXIT") == 0)
			exit(0);
		else
		{
			std::cout  << "Command error" << std::endl;
			std::cout  << "ADD, SEARCH or EXIT ?" << std::endl;
		}
	}
}

int		main(void) {

	Contact tab[8];

	choice(tab);

	return (1);
}
