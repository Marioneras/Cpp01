/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 20:03:50 by mberthou          #+#    #+#             */
/*   Updated: 2026/02/02 00:01:18 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class HumanB {
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		HumanB(const std::string &name);
		void setWeapon(Weapon &weapon);
		void attack();
};
