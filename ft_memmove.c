/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:15:23 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/07 02:36:55 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t size)
{
	unsigned char	*src;
	unsigned char	*dst;

	src = (unsigned char *)from;
	dst = (unsigned char *)to;
	if (!src && !dst)
		return (NULL);
	if (dst < src)
	{
		while (size--)
		{
			*dst++ = *src++;
		}
	}
	else if (dst > src)
	{
		dst += size;
		src += size;
		while (size--)
		{
			*(--dst) = *(--src);
		}
	}
	return (to);
}
