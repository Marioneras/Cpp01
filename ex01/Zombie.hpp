/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:59:09 by mberthou          #+#    #+#             */
/*   Updated: 2026/02/01 19:23:58 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <string>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie();
		Zombie(const std::string &name);
		~Zombie();
		void	announce(void);
};

Zombie* zombieHorde(int n, std::string name);

#endif
