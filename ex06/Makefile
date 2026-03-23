# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberthou <mberthou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/14 23:33:10 by mberthou          #+#    #+#              #
#    Updated: 2026/03/21 17:31:20 by mberthou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = main.cpp Harl.cpp
NAME = harlFilter
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
