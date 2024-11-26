/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:39:31 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/26 12:15:44 by mohkhald         ###   ########.fr       */
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
	int th = 3;
	//
	t_list *one = ft_lstnew(&o);
	t_list *two = ft_lstnew(&t);
	t_list *three = ft_lstnew(&th);
	//
	ft_lstadd_front(&head, one);
	ft_lstadd_front(&head, two);
	ft_lstadd_front(&head, three);
	//
	t_list *last = ft_lstlast(head);
	//
	printf("%d\n", *(int*)one->content);
	printf("%d\n", *(int*)two->content);
	printf("%d\n", *(int*)three->content);
	printf("%d\n", *(int*)last);

	return (0);
}
