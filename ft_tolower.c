#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c + 97 - 65;
	else
		return (c);
	return (c);
}
