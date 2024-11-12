<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:43:04 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/12 20:04:05 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
=======

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*)){
	unsigned int i;
	unsigned int len;
	
	i = 0;
	len = ft_strlen(s);
	while(i < len){
		f(i, s[i]);
		i++;
	}
>>>>>>> dabb7d79754b8e2f82f6bb511ad3d7f6908d1efe
}
