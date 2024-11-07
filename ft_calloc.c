/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 05:14:29 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/07 06:21:46 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*value;
	size_t	t_s;

	t_s = count * size;
	value = malloc(t_s);
	if (value)
		return (ft_memset(value, 0, t_s));
	return (value);
}
