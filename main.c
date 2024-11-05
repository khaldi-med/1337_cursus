/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:39:31 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/05 02:26:54 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	size_t		n;
	char		str1[9];
	const char	*str2 = "TeeL Codes";

	n = 0;
	printf("-->My: %zu\n-->Or: %zu", ft_strlcat(str1, str2, n), strlcat(str1,
			str2, n));
	return (0);
}
// 	size_t		n;
// 	char		str1[9];
// 	const char	*str2 = "TeeL Codes";
//
// 	n = 0;
// 	printf("-->My: %zu\n-->Or: %zu", ft_strlcpy(str1, str2, n), strlcpy(str1,
// 			str2, n));
//
// 	const char	*str2 = "";
//
// 	printf("-->My: %d\n-->Or: %d", ft_strncmp(str1, str2, 2), strncmp(str1,
// 			str2, 2));
// 		int	c;
//
// 	c = 'L';
// 	printf("-->My: %s\n-->Or: %s", ft_strrchr(str, c), strrchr(str, c));
//
/*
	* ft_strlen();
	* const char	*str = "Nice Try!";
	* printf("-->My_func: is %zu\n-->Origin: %zu", ft_strlen(str),
		strlen(str));
	*/
/*
		* ft_isprint();
		*
		* printf("-->My_func: is %d\n-->Origin: %d", ft_isprint(32),
			isprint(32));
		*/
/*
 * ft_isascii();
 *
 * printf("-->My_func: is %d\n-->Origin: %d", ft_isascii(0), isascii(0));
 */
/*
	* ft_isqlnum();
	*
	* printf("-->My_func: is %d\n-->Origin: %d", ft_isalnum(126),
		isdigit(126));
	*/
/*
	* ft_isdigit();
	*
	* printf("-->My_func: is %d\n-->Origin: %d", ft_isdigit(49),
		isdigit(49));
	*/
/*
	* ft_isalpha();
	*
	* printf("-->My_func: is %d\n-->Origin: %d", ft_isalpha(65),
		isalpha(65));
	*/
/*
	* ft_toupper();
	*
	* printf("-->My_func: is %d\n-->Origin:
		%d\n",ft_toupper(65),toupper(65));
	*
	* printf("-->My_func: is %c\n-->Origin: %c", ft_toupper(65),
		toupper(65));
	*/
/*
	* ft_tolower();
	*
	* printf("-->My_func: is %d\n-->Origin: %d\n",
		ft_tolower(65),tolower(65));
	*
	* printf("-->My_func: is %c\n-->Origin: %c",
		ft_tolower(65),tolower(65));
*/
