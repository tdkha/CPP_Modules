# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/01 22:56:20 by ktieu             #+#    #+#              #
#    Updated: 2025/01/03 18:04:33 by ktieu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=DiamondTrap

all: $(NAME)

CPP := c++
CFLAGS := -g -Wall -Wextra -Werror -std=c++98

SOURCE := main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
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