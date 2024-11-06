/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 04:57:28 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/05 16:55:51 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;

	s_len = ft_strlen(src);
	while (*src != '\0' && *dst != '\0' && s_len <= dstsize - 1)
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = '\0';
	return (s_len);
}
