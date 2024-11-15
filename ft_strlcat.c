/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:22:48 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/14 19:31:30 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;
	size_t	sp_left;
	char	*d;

	if (dstsize == 0)
		return (ft_strlen(src));
	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	d = dst + d_len;
	if (dstsize <= d_len)
		return (dstsize + s_len);
	sp_left = dstsize - d_len - 1;
	while (*src != '\0' && sp_left > 0)
	{
		*d++ = *src++;
		sp_left--;
	}
	*d = '\0';
	return (d_len + s_len);
}
