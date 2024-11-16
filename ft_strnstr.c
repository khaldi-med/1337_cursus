/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:50:24 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/16 06:13:54 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *target, size_t n)
{
	const char	*s;
	const char	*t;
	size_t		e;

	if (*target == '\0')
		return ((char *)src);
	if (!src && n == 0)
		return (NULL);
	while (*src && n > 0)
	{
		s = src;
		t = target;
		e = n;
		while (*s && *t && *s == *t && e > 0)
		{
			s++;
			t++;
			e--;
		}
		if (*t == '\0')
			return ((char *)src);
		src++;
		n--;
	}
	return (NULL);
}
