/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 16:47:21 by mberthou          #+#    #+#             */
/*   Updated: 2026/03/21 17:00:41 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name) {
	try {
		Zombie *newZombie = new Zombie[n];
	}
	catch (std::bad_alloc &e) {
		std::cerr << "Allocation failed" << std::endl;
	}

	for (int i = 0; i < n; i++)
		newZombie[i] = Zombie(name);

	return (newZombie);
}
