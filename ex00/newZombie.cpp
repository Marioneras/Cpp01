/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 16:41:36 by mberthou          #+#    #+#             */
/*   Updated: 2026/03/21 16:42:01 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
	try {
		Zombie *newZombie = new Zombie(name);
	}
	catch (std::bad_alloc &e) {
		std::cerr << "Allocation failed" << std::endl;
	}
	return (newZombie);
}

