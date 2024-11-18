/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:52:36 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/18 02:33:26 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_fill_str(char *s, long n, int len, int sgin)
{
	int	i;

	i = len - 1;
	if (n == 0)
		s[0] = '0';
	while (n > 0)
	{
		s[i--] = (n % 10) + '0';
		n /= 10;
	}
	if (sgin == -1)
		s[0] = '-';
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*str;
	long	num;
	long	len;

	num = n;
	sign = 1;
	if (n < 0)
	{
		sign *= -1;
		num = -num;
	}
	len = ft_int_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	ft_fill_str(str, num, len, sign);
	return (str);
}
