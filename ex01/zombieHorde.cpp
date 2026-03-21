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
	Zombie *newZombie = new Zombie[n];
	if (!newZombie)
		return (NULL);

	for (int i = 0; i < n; i++)
		newZombie[i] = Zombie(name);

	return (newZombie);
}
