# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/28 12:19:21 by ktieu             #+#    #+#              #
#    Updated: 2025/03/17 15:56:12 by ktieu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=form

all: $(NAME)

CPP := c++
CFLAGS := -Wall -Wextra -Werror -std=c++11

SOURCE := main.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Bureaucrat.cpp

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