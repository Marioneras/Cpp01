/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:25:41 by mberthou          #+#    #+#             */
/*   Updated: 2026/02/01 23:38:48 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &type) :
	_name(name),
	_weapon(type)
{}

void	HumanA::attack() {
	std::cout << _name << " attacks with their " << _weapon << std::endl;
}
