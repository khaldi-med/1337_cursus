/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:39:31 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/26 12:42:21 by mohkhald         ###   ########.fr       */
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
	t_list *head = NULL;
	//
	int o = 1;
	int t = 2;
	//
	t_list *one = ft_lstnew(&o);
	t_list *tow = ft_lstnew(&t);
	//
	ft_lstadd_front(&head, tow);
	ft_lstadd_front(&head, one);

	//
	t_list *last = ft_lstlast(head);
	//
	printf("%d\n", *(int*)one->content);
	printf("%d\n", *(int*)last->content);

	return (0);
}
