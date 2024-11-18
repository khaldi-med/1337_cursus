/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:47:27 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/18 01:00:53 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a1, const void *a2, size_t size)
{
	const unsigned char	*m1;
	const unsigned char	*m2;

	m1 = a1;
	m2 = a2;
	while (size--)
	{
		if (*m1 != *m2)
			return (*m1 - *m2);
		m2++;
		m1++;
	}
	return (0);
}
