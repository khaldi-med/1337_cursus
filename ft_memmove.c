/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:15:23 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/28 14:06:46 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t size)
{
	unsigned char	*src;
	unsigned char	*dst;

	src = (unsigned char *)from;
	dst = (unsigned char *)to;
	if (!from && !to)
		return (NULL);
	if (src == dst)
		return (to);
	if (dst < src)
	{
		while (size--)
			*dst++ = *src++;
	}
	else
	{
		dst += size;
		src += size;
		while (size--)
			*--dst = *--src;
	}
	return (to);
}
