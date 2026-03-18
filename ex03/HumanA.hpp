/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:09:22 by mberthou          #+#    #+#             */
/*   Updated: 2026/02/02 00:01:20 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>

#include "Weapon.hpp"

class HumanA {
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA(const std::string &name, Weapon &type);
		void attack();
};

#endif
