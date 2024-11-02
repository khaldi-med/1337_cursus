/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:58:36 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/02 23:08:35 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*matchChar = NULL;

	while (*str != '\0')
	{
		if (*str == (char)c)
			matchChar = (char *)str;
		str++;
	}
	return ((char *)matchChar);
}
