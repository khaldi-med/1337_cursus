/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:22:48 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/04 23:46:34 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;
	size_t	result;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	result = s_len + d_len;
	if (result >= dstsize)
		return (0);
	while (*src != '\0' && *dst != '\0' && s_len <= dstsize - 1)
	{
		*(dst + 1) = *src;
		src++;
		dst++;
	}
	*dst = '\0';
	return (result);
}
