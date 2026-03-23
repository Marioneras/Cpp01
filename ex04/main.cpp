/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 09:11:04 by mberthou          #+#    #+#             */
/*   Updated: 2026/03/21 17:17:27 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#include "colours.hpp"

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr	<< RED << "Not enough arguments: "
					<< "The program takes three parameters in the "
					<< "following order: a filename and two strings, s1 and s2"
					<< RESET << std::endl;
		return (1);
	}
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	if (s1.empty()) {
		std::cerr	<< RED << "Please, do not use an empty string for s1"
					<< std::endl;
		return (1);
	}

	std::ifstream file(argv[1]);
	std::string newFile = std::string(argv[1]) + ".replace";
	std::ofstream fileReplace(newFile.c_str());
	if (!file.is_open() || !fileReplace) {
		std::cerr	<< RED << "Error: Unable to open "
					<< (!file.is_open() ? std::string(argv[1]) : newFile)
					<< " file!"
					<< RESET << std::endl;
		return (1);
    }

	std::string line;
    while (std::getline(file, line)) {
		size_t index = 0;
		while ((index = line.find(s1, index)) != std::string::npos) {
			line.erase(index, s1.size());
			line.insert(index, s2);
			index += s2.length();
		}
		fileReplace << line;
		fileReplace << std::endl;
	}
    if (!file.eof())
		std::cerr << RED << "Error: File reading failed!" << RESET << std::endl;

	file.close();
	fileReplace.close();
}
