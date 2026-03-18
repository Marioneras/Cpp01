/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 09:11:04 by mberthou          #+#    #+#             */
/*   Updated: 2026/02/02 10:47:23 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <bits/stdc++.h>

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr	<< "Not enough arguments: "
					<< "the program takes three parameters in the "
					<< "following order: a filename and two strings, s1 and s2"
					<< std::endl;
		return (1);
	}
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream file(argv[1]);
	char *newFile = std::strcat(argv[1], ".replace");
	std::ofstream fileReplace(newFile);
	if (!file.is_open() || !fileReplace) {
		std::cerr << "Error: Unable to open file!" << std::endl;
		return (1);
    }

	std::string line;
    while (std::getline(file, line)) {
		size_t index = 0;
		while ((index = line.find(s1, index + 1)) != std::string::npos) {
			line.erase(index, s1.size());
			line.insert(index, s2);
		}
		fileReplace << line;
		fileReplace << std::endl;
	}
    if (!file.eof())
		std::cerr << "Error: File reading failed!" << std::endl;

	file.close();
	fileReplace.close();
}
