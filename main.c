/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:39:31 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/18 05:31:28 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char	to_uppercase(unsigned int i, char c)
{
	(void)i; // Unused parameter
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char	*str;
	char	*result;

	str = "Hello, World!";
	result = ft_strmapi(str, to_uppercase);
	if (result)
	{
		printf("Transformed string: %s\n", result);
		free(result);
	}
	else
	{
		printf("Failed to transform string.\n");
	}
	return (0);
}
