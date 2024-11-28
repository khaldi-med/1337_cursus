/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 05:14:29 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/28 23:51:22 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;
	size_t	t_s;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	t_s = count * size;
	array = malloc(t_s);
	if (!array)
		return (NULL);
	ft_bzero(array, t_s);
	return (array);
}
