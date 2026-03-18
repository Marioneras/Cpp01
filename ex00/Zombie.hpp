/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:59:09 by mberthou          #+#    #+#             */
/*   Updated: 2026/02/01 18:23:16 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <string>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie(const std::string &name);
		~Zombie();
		void	announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
