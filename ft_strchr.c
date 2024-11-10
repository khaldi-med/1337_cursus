<<<<<<< HEAD
#include <libft.h>

char *ft_strchar(const char *str, int c){
	while(*str != '\0'){
		if(*str == (char) c)
			return (char *) str;
	}
	str++;
	if(c == '\0')
		return (char *) str;
	return NULL;
}

=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:58:36 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/08 22:37:38 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}
>>>>>>> c7a3b4442913a23a040018be8135dade3ed4a375
