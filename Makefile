# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tabernar <tanguy.bernard@student.42.fr>      +#+  +:+       +#+       #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 16:59:42 by tabernar          #+#    #+#              #
#    Updated: 2024/11/19 15:54:42 by tabernar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------- COMPILATION -----------------------------------------------#
CC := cc
CFLAGS := -Wall -Wextra -Werror
CPPFLAGS := -c

# ------------------VARIABLES--------------------------------------------------#

NAME := libft.a
FILE := $(wildcard ft_*.c)

LIB = libft.h
FILEO = $(FILE:.c=.o)
MAIN = .main/main_
MAINFILE = $(addprefix $(MAIN), $(FILE))
TEST = $(basename $(MAINFILE))

#-----------------RULES--------------------------------------------------------#

all: $(NAME) #$(TEST)

$(NAME): $(FILEO)
	ar -rcs $(NAME) $(FILEO)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< -I $(LIB)
#	cp $(addprefix $(MAIN), $<) .

#./main_%.c :
#	$(CC) $(CFLAGS) $@ -o $(notdir $(basename $@)) -L . -lft
#	mv $(notdir $(basename $@)) .main
#	rm -f $@

clean: 
	rm -f $(FILEO)
#	rm -f .main/$(TEST)


fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


