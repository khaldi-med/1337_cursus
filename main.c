/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:39:31 by mohkhald          #+#    #+#             */
/*   Updated: 2024/10/31 01:38:57 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("-->My_func: is %d\n-->Origin: %d", ft_isalnum(126), isdigit(126));
	/*ft_isdigit();
	printf("-->My_func: is %d\n-->Origin: %d", ft_isdigit(49), isdigit(49));
	*/
	/* ft_isalpha();
		printf("-->My_func: is %d\n-->Origin: %d", ft_isalpha(65), isalpha(65));
	*/
	/* ft_toupper();
		printf("-->My_func: is %d\n-->Origin: %d\n",ft_toupper(65),toupper(65));
		printf("-->My_func: is %c\n-->Origin: %c", ft_toupper(65), toupper(65));
		*/
	/* ft_tolower();
			printf("-->My_func: is %d\n-->Origin: %d\n",
				ft_tolower(65),tolower(65));
			printf("-->My_func: is %c\n-->Origin: %c",
				ft_tolower(65),tolower(65));
	*/
	return (0);
}
