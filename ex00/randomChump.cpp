/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 16:42:06 by mberthou          #+#    #+#             */
/*   Updated: 2026/03/21 16:43:07 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include <string>

#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie	newZombie(name);

	newZombie.announce();
}
