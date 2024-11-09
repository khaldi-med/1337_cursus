/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 02:38:36 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/09 19:44:26 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_match(const char c, const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char	**ft_split(char const *s, char c)
{
	size_t		len;
	char		**new_s;
	const char	*p_s;
	size_t		i;

	if (!s || !c)
		return (NULL);
	len = ft_strlen(s);
	p_s = s;
	i = 0;
	new_s = malloc(len) + 1;
	if (!new_s)
		return (NULL);
	while (*p_s++)
	{
		while (*s++)
		{
			if (!ft_match(c, s))
				i++;
			ft_calloc(i, **new_s);
			ft_memcpy((unsigned char *)*new_s, s, i);
		}
	}
	return (new_s);
}
