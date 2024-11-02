#ifndef LIBFT_H
# define LIBFT_H

// Builte in library
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// My functions
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *str);
#endif
