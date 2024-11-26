/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 05:01:00 by mohkhald          #+#    #+#             */
/*   Updated: 2024/11/26 12:25:48 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H

// C Librarys
# include <stddef.h>
# include <stdlib.h>

// Libft Bonus Part

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);

t_list				*ft_lstlast(t_list *lst);

void				ft_lstadd_front(t_list **lst, t_list *new);

void				ft_lstadd_back(t_list **lst, t_list *new); 
int					ft_lstsize(t_list *lst);

#endif
