/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 23:38:49 by mberthou          #+#    #+#             */
/*   Updated: 2026/02/02 00:01:15 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) :
	_name(name),
	_weapon(NULL)
{}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void	HumanB::attack() {
	if (_weapon)
		std::cout << _name << " attacks with their " << *_weapon << std::endl;
	else
		std::cout << _name << " has no weapon" << std::endl;
}
