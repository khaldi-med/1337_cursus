#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	t_list	*head;
	t_list	*one;
	t_list	*two;
	t_list	*three;
	t_list	*four;
	t_list	*end;
	int		i;
	int		j;
	int		d;
	int		k;
	int		size;

	//
	head = NULL;
	i = 1;
	j = 2;
	d = 3;
	k = 4;
	//
	one = ft_lstnew(&i);
	two = ft_lstnew(&j);
	three = ft_lstnew(&d);
	four = ft_lstnew(&k);
	//
	ft_lstadd_front(&head, one);
	ft_lstadd_front(&head, two);
	ft_lstadd_front(&head, three);
	ft_lstadd_back(&head, four);
	end = ft_lstlast(head);
	//
	size = ft_lstsize(head);
	while (head)
	{
		printf("%d\n", *(int *)head->content);
		head = head->next;
	}
	printf("size: %d\n", size);
	printf("end: %d\n", *(int*)end->content);
	return (0);
}
