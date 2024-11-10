/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 02:38:36 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/10 02:39:37 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_match_d(const char c, const char *str)
{
	size_t	count;
	int		st_w;

	count = 0;
	st_w = 0;
	while (*str)
	{
		if (*str != c && !st_w)
		{
			st_w = 1;
			count++;
		}
		else if (*str == c)
			st_w = 0;
		str++;
	}
	return (count);
}

static void	ft_free_arr(char **str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**new_s;
	size_t	j;
	size_t	start;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	new_s = malloc(ft_match_d(c, s) + 1);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			if (!(new_s[j++] = ft_substr(s, start, i)))
			{
				ft_free_arr(new_s, j);
				return (NULL);
			}
		}
	}
	new_s[j] = NULL;
	return (new_s);
}
