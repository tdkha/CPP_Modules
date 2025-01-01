# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/01 22:56:20 by ktieu             #+#    #+#              #
#    Updated: 2025/01/01 23:01:19 by ktieu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ClapTrap

all: $(NAME)

CPP := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98

SOURCE := main.cpp ClapTrap.cpp
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