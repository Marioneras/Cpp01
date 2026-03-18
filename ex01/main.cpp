/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:59:40 by mberthou          #+#    #+#             */
/*   Updated: 2026/02/01 19:23:53 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

int	main(){
	Zombie *foos = zombieHorde(5, "Foo");
	Zombie *bars = zombieHorde(6, "Bar");

	for (int i = 0; i < 5; i++)
		foos[i].announce();

	for (int i = 0; i < 6; i++)
		bars[i].announce();

	delete[] foos;
	delete[] bars;

	return (0);
}
