# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/14 23:33:10 by mberthou          #+#    #+#              #
#    Updated: 2026/03/21 17:07:32 by mberthou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
NAME = UnnecessaryViolence
CXX_FLAGS = -Wall -Wextra -Werror -std=c++98
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJECTS)
	c++ -o $(NAME) $(OBJECTS)

%.o: %.cpp
	c++ -o $@ -c $< $(CPP_FLAGS)

clean :
	rm $(OBJECTS)

fclean : clean
	rm $(NAME)

re : fclean all

.PHONY: all clean fclean re
