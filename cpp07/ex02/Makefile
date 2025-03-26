# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/26 13:40:23 by ktieu             #+#    #+#              #
#    Updated: 2025/03/26 17:40:40 by ktieu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=array

all: $(NAME)

CPP := c++
CFLAGS := -std=c++11 -Wall -Wextra -Werror

SOURCE := main.cpp

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