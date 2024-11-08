/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:39:31 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/08 00:57:51 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s1;
	const char	*s2;

	s1 = "hello,";
	s2 = " world";
	printf("My--> %s", ft_strjoin(s1, s2));
	return (0);
}
