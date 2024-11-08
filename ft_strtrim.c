/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 01:56:21 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/08 05:24:51 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	match(const char *s1, char const *s2)
{
	char	*p_s1;
	char	*p_s2;
	size_t	match;

	p_s1 = (char *)s1;
	p_s2 = (char *)s2;
	while (*p_s1)
	{
		match = 0;
		while (*p_s1)
		{
			if (*p_s1 == *p_s2)
				match += 1;
			p_s2++;
		}
		p_s1++;
	}
	return (match);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	char	*p_new;

	new = malloc(match(s1, set) + 1);
	if (!new)
		return (NULL);
	p_new = new;
	while (*s1)
	{
		if (*s1 != *set)
			*new = *s1;
		set++;
		new ++;
	}
	s1++;
	*new = '\0';
	return (p_new);
}
