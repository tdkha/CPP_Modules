# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/03 14:03:25 by ktieu             #+#    #+#              #
#    Updated: 2025/01/03 14:03:35 by ktieu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=interface

all: $(NAME)

CPP := c++
CFLAGS := -g -Wall -Wextra -Werror -std=c++11

SOURCE := main.cpp AMateria.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp

OBJ := $(SOURCE:.cpp=.o)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re