#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static int	ft_is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*strtrim(const char *s1, const char *set)
{
	const char	*start = s1;
	const char	*end = s1 + ft_strlen(s1) - 1;
	size_t		trimmed_len;
	char		*result;
	char		*r;

	if (!s1 || !set)
		return (NULL);
	while (*start && ft_is_in_set(*start, set))
		start++;
	if (*start == '\0')
		return (char *)malloc(1); // Return an empty string
	while (end > start && ft_is_in_set(*end, set))
		end--;
	trimmed_len = end - start + 1;
	result = (char *)malloc(trimmed_len + 1);
	if (!result)
		return (NULL);
	r = result;
	while (start <= end)
		*r++ = *start++;
	*r = '\0'; // Null-terminate the string
	return (result);
}
