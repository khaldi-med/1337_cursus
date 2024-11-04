/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:22:48 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/04 23:30:25 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	while (*src != '\0' && *dst != '\0' && s_len <= dstsize - 1)
	{
		*(dst + 1) = *src;
		src++;
		dst++;
	}
	*dst = '\0';
	return (s_len + d_len);
}
