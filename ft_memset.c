/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 02:15:00 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/07 02:27:44 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *block, int c, size_t size)
{
	unsigned char	*str;
	unsigned char	r;

	str = (unsigned char *)block;
	r = (unsigned char)c;
	while (size > 0)
	{
		*str = r;
		str++;
		size--;
	}
	return (block);
}
