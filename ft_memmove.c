/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:15:23 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/17 12:11:31 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t size)
{
	const unsigned char	*src;
	unsigned char		*dst;

	src = from;
	dst = to;
	if (src == dst)
		return (dst);
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
