/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:39:31 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/18 05:46:19 by mohkhald         ###   ########.fr       */
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

void	to_lowercase(unsigned int i, char *c)
{
	(void)i; // Unused parameter
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

int	main(void)
{
	char	str[] = "HeLLo, WoRLd!";
	ft_striteri(str, to_lowercase);
	printf("Modified string: %s\n", str);
	return (0);
}
