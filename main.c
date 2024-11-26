/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:39:31 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/26 18:33:05 by mohkhald         ###   ########.fr       */
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

	o = 1;
	t = 2;
	one = ft_lstnew(&o);
	tow = ft_lstnew(&t);
	ft_lstadd_front(&head, tow);
	ft_lstadd_back(&head, one);
	size = ft_lstsize(head);
	t_list *last = ft_lstlast(head);
	printf("%d\n", size);
	printf("%d\n", *(int*)last->content);
	return (0);
}
