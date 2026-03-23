/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:26:43 by mberthou          #+#    #+#             */
/*   Updated: 2026/02/02 12:50:23 by mberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

std::string toLower(std::string str) {
    for (size_t i = 0; i < str.length(); i++)
        str[i] = std::tolower(str[i]);
    return str;
}

int main(int argc, char **argv) {
    if (argc != 2)
        return (1);

    Harl harl;
    harl.complain(toLower(argv[1]));
}
