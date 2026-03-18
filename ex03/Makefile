# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/01 18:28:35 by mberthou          #+#    #+#              #
#    Updated: 2026/02/01 23:47:23 by mberthou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Unnecessary_violence
SOURCES = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

$(NAME): $(SOURCES)
	$(CC) $(CFLAGS) -o $(NAME) $(SOURCES)

clean:
	rm -rf $(NAME)
