/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 02:46:27 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/17 03:35:03 by mohammed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	n;
	int		sing;
	char	*s;

	s = (char *)str;
	n = 0;
	sing = 1;
	while ((*s >= 9 && *s <= 13) || *s == ' ')
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sing *= -1;
		s++;
	}
	while (*s && (*s >= '0' && *s <= '9'))
	{
		n = n * 10 + (*s - '0');
		s++;
	}
	return (sing * n);
}
