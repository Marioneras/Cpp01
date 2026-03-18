/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:23:08 by mberthou          #+#    #+#             */
/*   Updated: 2026/02/01 23:32:26 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) :
	_type(type)
{}

const std::string &Weapon::getType() const {
	return (_type);
}

void Weapon::setType(const std::string &type) {
	_type = type;
}

std::ostream& operator<<(std::ostream &os, const Weapon &weapon) {
	os << weapon.getType();
	return os;
}
