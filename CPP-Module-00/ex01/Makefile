# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/19 13:13:21 by marvin            #+#    #+#              #
#    Updated: 2024/08/19 13:13:21 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
MY_LIB = ./my_lib
SRC = main.cpp Contact.cpp PhoneBook.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(SRC) -o $(NAME) $(FLAGS)
	@echo "\e[0;93m[$(NAME)] compiled!\e[0m"

clean:
	@echo > /dev/null

fclean:
	@rm -f $(NAME)
	@echo "\e[0;91m[$(NAME)] deleted!\e[0m"

re: fclean all

.PHONY: all clean fclean re
