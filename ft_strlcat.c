/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:22:48 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/05 18:30:56 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;
	size_t	spleft;
	char	*d;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	d = dst + d_len;
	if (dstsize <= d_len)
		return (dstsize + s_len);
	spleft = dstsize - d_len - 1;
	while (*src != '\0' && spleft > 0)
	{
		*d = *src++;
		d++;
		spleft--;
	}
	*d = '\0';
	return (d_len + s_len);
}
