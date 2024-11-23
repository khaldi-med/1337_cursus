/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:52:36 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/23 06:26:45 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;

	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char *	ft_fill_str(char *s, unsigned int n, long int len)
{
	while(n > 0){
		s[len--] = '0' + (n % 10);
		n /= 10;
	}
	return s;
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*str;
	unsigned int	num;
	long int	len;

	sign = 1;
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if(n == 0)
		str[0] = '\0';
	if (n < 0)
	{
		sign *= -1;
		num = n * -1;
		str[0] = '-';
	}
	else
		num = n;
	str = ft_fill_str(str, num, len);
	return str;

}
