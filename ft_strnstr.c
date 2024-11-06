/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:50:24 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/06 01:45:42 by mohkhald         ###   ########.fr       */
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
	match = (char *)src;
	if (*target == 0)
		return ((char *)src);
	while (*s != '\0' && n > 0)
	{
		if (*target == *src)
			match = (char *)src;
		while (*s != '\0' && *s == *t && n > 0)
		{
			s++;
			t++;
			n--;
		}
		if (*t == '\0')
			match = (char *)src;
		s++;
		n--;
	}
	return (match);
}
