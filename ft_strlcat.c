/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:22:48 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/05 02:53:06 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		s_len;
	size_t		d_len;
	size_t		spleft;
	const char	*s;
	char		*d;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	s = src;
	d = dst;
	spleft = dstsize - (d_len - 1);
	if (dstsize <= d_len)
		return (d_len + s_len);
	while (*s != '\0' && spleft > 0)
	{
		*d++ = *s++;
		spleft--;
	}
	*d = '\0';
	return (d_len + s_len);
}
