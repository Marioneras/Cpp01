/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:12:06 by mberthou          #+#    #+#             */
/*   Updated: 2026/02/02 12:53:42 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

void	Harl::debug() {
	std::cout	<< "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				<< "I really do!"
				<< std::endl;
}

void	Harl::info() {
	std::cout	<< "I cannot believe adding extra bacon costs more money. "
				<< "You didn’t put enough bacon in my burger! "
				<< "If you did, I wouldn’t be asking for more!"
				<< std::endl;
}

void	Harl::warning() {
	std::cout	<< "I think I deserve to have some extra bacon for free. "
				<< "I’ve been coming for years, "
				<< "whereas you started working here just last month."
				<< std::endl;
}

void	Harl::error() {
	std::cout	<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}

void	Harl::complain(std::string level) {
	static const struct s_level	dico[] = {
		{"debug", &Harl::debug},
		{"info", &Harl::info},
		{"warning", &Harl::warning},
		{"error", &Harl::error}
	};
	const int size = sizeof(dico) / sizeof(dico[0]);

	for (int i = 0; i < size; i++) {
		if (level == dico[i].level) {
			(this->*dico[i].function)();
            return;
		}
	}
}
