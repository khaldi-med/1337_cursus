/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:55:07 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/07 18:17:32 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s)
{
	char	*new;
	char	*n_str;

	new = malloc(ft_strlen(s) + 1);
	n_str = new;
	if (!new)
		return (NULL);
	while (*s != '\0')
	{
		*new = (char)*s;
		new ++;
		s++;
	}
	*new = '\0';
	return (n_str);
}
