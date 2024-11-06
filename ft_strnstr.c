/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:50:24 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/06 01:48:44 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *target, size_t n)
{
	char		*match;
	const char	*s;
	const char	*t;

	s = src;
	t = target;
	match = (char *)s;
	if (*target == 0)
		return ((char *)src);
	while (*s != '\0' && n > 0)
	{
		if (*t == *s)
			match = (char *)s;
		while (*s != '\0' && *s == *t && n > 0)
		{
			s++;
			t++;
			n--;
		}
		if (*t == '\0')
			return (match);
		s++;
		n--;
	}
	return (match);
}
