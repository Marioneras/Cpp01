/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:21:09 by mberthou          #+#    #+#             */
/*   Updated: 2026/02/01 23:43:43 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class	Weapon {
	private:
		std::string	_type;
	public:
		Weapon(const std::string &type);
		const std::string &getType() const;
		void setType(const std::string &type);
};

std::ostream& operator<<(std::ostream &os, const Weapon &weapon);

#endif
