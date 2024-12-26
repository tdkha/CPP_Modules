# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/26 15:37:04 by ktieu             #+#    #+#              #
#    Updated: 2024/12/26 16:05:39 by ktieu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=MoarBrainz
all: $(NAME)

CPP := c++
FLAGS := -Wall -Wextra -Werror -std=c++98

SOURCE := main.cpp Zombie.cpp zombieHorde.cpp
OBJ := $(SOURCE:.cpp=.o)

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME) 

%.o : %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re