/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 15:33:59 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/01 20:06:46 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <iomanip>


class Contact {

public:

	Contact (void);
	~Contact (void);


void	setFirstname(std::string name);
void	setLastname(std::string name);
void	setNickname(std::string name);
void	setLogin(std::string name);
void	setPostal(std::string name);
void	setEmail(std::string name);
void	setPhone(std::string name);
void	setBirthday(std::string name);
void	setMeal(std::string name);
void	setColor(std::string name);
void	setSecret(std::string name);


std::string	 getFirstname(void) const;
std::string	 getLastname(void) const;
std::string	 getNickname(void) const;
std::string	 getLogin(void) const;
std::string	 getPostal(void) const;
std::string	 getEmail(void) const;
std::string	 getPhone(void) const;
std::string	 getBirthday(void) const;
std::string	 getMeal(void) const;
std::string	 getColor(void) const;
std::string	 getSecret(void) const;

static int			getNbContact(void);

private:

	static int	_nbContact;
	
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _login;
	std::string _postal;
	std::string _email;
	std::string _phone;
	std::string _birthday;
	std::string _meal;
	std::string _color;
	std::string _secret;

};

void	choice(Contact *tab);
#endif
