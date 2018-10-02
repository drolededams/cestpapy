/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 15:34:02 by dgameiro          #+#    #+#             */
/*   Updated: 2018/10/01 20:06:49 by dgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {

	return;
}

Contact::~Contact(void) {

	return;
}

void	Contact::setFirstname(std::string name){

	this->_firstname = name;
	Contact::_nbContact += 1;
}

void	Contact::setLastname(std::string name){

	this->_lastname = name;
}
void	Contact::setNickname(std::string name){

	this->_nickname = name;
}
void	Contact::setLogin(std::string name){

	this->_login = name;
}
void	Contact::setPostal(std::string name){

	this->_postal = name;
}
void	Contact::setEmail(std::string name){

	this->_email = name;
}
void	Contact::setPhone(std::string name){

	this->_phone = name;
}
void	Contact::setBirthday(std::string name){

	this->_birthday = name;
}
void	Contact::setMeal(std::string name){

	this->_meal = name;
}
void	Contact::setColor(std::string name){

	this->_color = name;
}
void	Contact::setSecret(std::string name){

	this->_secret = name;
}

std::string	 Contact::getFirstname(void) const{

	return this->_firstname;
}

std::string	 Contact::getLastname(void) const{

	return this->_lastname;
}
std::string	 Contact::getNickname(void) const{

	return this->_nickname;
}
std::string	 Contact::getLogin(void) const{

	return this->_login;
}
std::string	 Contact::getPostal(void) const{

	return this->_postal;
}
std::string	 Contact::getEmail(void) const{

	return this->_email;
}
std::string	 Contact::getPhone(void) const{

	return this->_phone;
}
std::string	 Contact::getBirthday(void) const{

	return this->_birthday;
}
std::string	 Contact::getMeal(void) const{

	return this->_meal;
}
std::string	 Contact::getColor(void) const{

	return this->_color;
}
std::string	 Contact::getSecret(void) const{

	return this->_secret;
}
int	Contact::_nbContact = 0;

int			Contact::getNbContact(void) {

	return Contact::_nbContact;
}
