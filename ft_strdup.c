/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:55:07 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/08 00:14:46 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	char	*n_str;

	new = malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	n_str = new;
	while (*s != '\0')
	{
		*new = *s;
		new ++;
		s++;
	}
	*new = '\0';
	return (n_str);
}
