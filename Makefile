# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 20:25:08 by mohkhald          #+#    #+#              #
#    Updated: 2024/11/16 04:48:18 by mohkhald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_putendl_fd.c ft_isalpha.c ft_isdigit.c ft_atoi.c\
        ft_putstr_fd.c ft_calloc.c ft_isalnum.c ft_isascii.c\
        ft_strmapi.c ft_split.c ft_isprint.c ft_strlen.c\
        ft_striteri.c ft_memset.c ft_bzero.c ft_memchr.c ft_memcpy.c\
        ft_memcmp.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
        ft_putchar_fd.c ft_strtrim.c ft_toupper.c ft_tolower.c \
        ft_itoa.c ft_substr.c ft_strchr.c ft_strncmp.c \
        ft_strnstr.c ft_strrchr.c ft_strjoin.c ft_strdup.c\
        ft_putnbr_fd.c\


all = $(NAME)

NAME = libft.a

OBJ = $(SRCS:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

%.o: %.c libft.h
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
