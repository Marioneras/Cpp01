/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:59:10 by mberthou          #+#    #+#             */
/*   Updated: 2026/02/01 18:23:15 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

void Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(const std::string &name) :
	_name(name)
{}

Zombie::~Zombie() {
	std::cout << "Destroyed " << _name << std::endl;
}

Zombie *newZombie(std::string name) {
	Zombie *newZombie = new Zombie(name);
	if (!newZombie)
		std::cout << "Memory allocation failed" << std::endl;
	return (newZombie);
}

void randomChump(std::string name) {
	Zombie	newZombie(name);

	newZombie.announce();
}
