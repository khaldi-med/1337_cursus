/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:39:31 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/26 12:56:33 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"
#include <ctype.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	t_list	*head;
	int		o;
	int		t;
	t_list	*one;
	t_list	*tow;
	int		size;

	head = NULL;
	o = 1;
	t = 2;
	one = ft_lstnew(&o);
	tow = ft_lstnew(&t);
	ft_lstadd_front(&head, tow);
	ft_lstadd_front(&head, one);
	size = ft_lstsize(head);
	printf("%d\n", size);
	return (0);
}
