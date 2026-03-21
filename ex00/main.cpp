/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:59:10 by mberthou          #+#    #+#             */
/*   Updated: 2026/03/21 16:44:12 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

int	main() {
	Zombie *foo = newZombie("Foo");
	foo->announce();
	delete foo;

	randomChump("Bar");
	return (0);
}
