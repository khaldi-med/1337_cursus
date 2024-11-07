/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 02:49:55 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/07 02:40:18 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	unsigned char	*src;
	unsigned char	*dst;

	src = (unsigned char *)from;
	dst = (unsigned char *)to;
	if (!to && !from)
		return (NULL);
	while (n--)
	{
		*dst++ = *src++;
	}
	return (to);
}
