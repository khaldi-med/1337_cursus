/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 05:14:29 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/20 08:58:37 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*value;
	size_t	t_s;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	t_s = count * size;
	value = malloc(t_s);
	if (!value)
		return (NULL);
	ft_bzero(value, t_s);
	return (value);
}
