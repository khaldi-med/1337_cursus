/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 02:49:55 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/06 22:06:46 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	const unsigned char	*src;
	unsigned char		*dst;

	src = (const unsigned char *)from;
	dst = (unsigned char *)to;
	while (n > 0)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	return (to);
}
