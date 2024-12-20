# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 08:00:21 by ktieu             #+#    #+#              #
#    Updated: 2024/12/20 12:39:26 by ktieu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=The_Job_Of_Your_Dreams

all:$(NAME)

CPP := c++
FLAGS := -Wall -Wextra -Werror -std=c++98

SRC := tests.cpp Account.cpp
OBJ := $(SRC:.cpp=.o)

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