# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 16:11:02 by acoka-re          #+#    #+#              #
#    Updated: 2024/10/29 16:21:05 by acoka-re         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	VARIABLES	

CC = cc
CFLAGS = -Wall -Wextra -Werror
INC_HEADER = -I.
NAME = libftprintf.a
AR = ar rcs


GREEN = \033[0;32m
RED = \033[0;31m
BLUE = \033[0;34m
YELLOW = \033[0;33m
COLOR_END = \033[0m

#	SOURCE FILES

SRCS = ft_printf.c \
ft_m_putchar.c \
ft_m_putnbr.c \
ft_m_putstr.c \
ft_puthex.c \
ft_putptr.c \
ft_putunsdecimal.c

OBJ = $(SRCS:%.c=%.o)

#	RULES

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $@ $(OBJ)
	@echo "\n$(GREEN)*** $(NAME) CREATED ***$(COLOR_END)\n" 
	
clean:
	@rm -f $(OBJ)
	@echo "$(YELLOW)*** DELETING OBJECT FILE(S) ***$(COLOR_END)\n"
	@echo "$(GREEN)*** OBJECT FILE(S) DELETED ***$(COLOR_END)\n"

fclean: clean
	@rm -f $(NAME) $(OBJ)
	@echo "$(YELLOW)*** DELETING $(NAME) ***$(COLOR_END)\n"
	@echo "$(GREEN)*** $(NAME) DELETED ***$(COLOR_END)\n"

re: fclean all

.PHONY:  all clean fclean re