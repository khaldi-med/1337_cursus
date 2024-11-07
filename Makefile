SRCS = ft_isalpha.c ft_isdigit.c ft_atoi.c\
	ft_calloc.c ft_isalnum.c ft_isascii.c\
	ft_isprint.c ft_strlen.c\
	ft_memset.c ft_bzero.c ft_memchr.c ft_memcpy.c\
	ft_memcmp.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strncmp.c \
	ft_strnstr.c ft_strrchr.c ft_strdup.c\

OBJS = ${SRCS:.c=.o}
NAME = libft.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME} 

re: fclean all

.PHONY : all bonus clean fclean re
