/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:39:31 by mohkhald          #+#    #+#             */
/*   Updated: 2024/10/30 19:48:36 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("-->My_func: is %d\n-->Origin: %d", ft_isalpha(65), isalpha(65));
	// ft_toupper();
	/*	printf("-->My_func: is %d\n-->Origin: %d\n", ft_toupper(65),
			toupper(65));
		printf("-->My_func: is %c\n-->Origin: %c", ft_toupper(65), toupper(65));
	*/
	// ft_tolower();
	/*
			printf("-->My_func: is %d\n-->Origin: %d\n", ft_tolower(65),
			tolower(65));
			printf("-->My_func: is %c\n-->Origin: %c", ft_tolower(65),
			tolower(65));
		*/
	return (0);
}
