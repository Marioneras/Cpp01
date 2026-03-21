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
	Zombie *newZombie = new Zombie(name);
	if (!newZombie)
		std::cout << "Memory allocation failed" << std::endl;
	return (newZombie);
}

