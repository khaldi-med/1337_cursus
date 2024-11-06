/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:40:39 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/06 23:14:15 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *block, int c, size_t size)
{
	const unsigned char	*src;
	unsigned char		n;

	src = (const unsigned char *)block;
	n = (unsigned char)c;
	while (size > 0)
	{
		if (*src == n)
			return ((void *)src);
		src++;
		size--;
	}
	return (NULL);
}
