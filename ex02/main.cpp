/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 19:25:32 by mberthou          #+#    #+#             */
/*   Updated: 2026/02/01 19:41:34 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	std::string brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout	<< "The memory address of the string variable: "
				<< &brain << std::endl;
	std::cout	<< "The memory address held by stringPTR: "
				<< stringPTR << std::endl;
	std::cout	<< "The memory address held by stringREF: "
				<< &stringREF << std::endl;

	std::cout	<< std::endl;

	std::cout	<< "The value of the string variable: "
				<< brain << std::endl;
	std::cout	<< "The value pointed to by stringPTR: "
				<< *stringPTR << std::endl;
	std::cout	<< "The value pointed to by stringREF: "
				<< stringREF << std::endl;

	return (0);
}
