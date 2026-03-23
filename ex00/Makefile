# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/14 23:33:10 by mberthou          #+#    #+#              #
#    Updated: 2026/03/21 16:44:19 by mberthou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
NAME = BraiiiiiiinnnzzzZ
CXX_FLAGS = -Wall -Wextra -Werror -std=c++98
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJECTS)
	c++ -o $(NAME) $(OBJECTS)

%.o: %.cpp
	c++ -o $@ -c $< $(CXX_FLAGS)

clean :
	rm $(OBJECTS)

fclean : clean
	rm $(NAME)

re : fclean all

.PHONY: all clean fclean re
