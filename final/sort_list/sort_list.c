/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:54:03 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/24 03:59:12 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

/*
int	ascending(int a, int b)
{
	return (a <= b);
}
*/

int	count_list(t_list *lst)
{
	int	count;

	count = 0;
	while (lst->next != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

t_list	*recurse_sort(t_list *lst, t_list *prev, int(*cmp)(int, int))
{
	t_list	*temp;

	if (lst->next == NULL)
		return (lst);
	if (cmp(lst->data, lst->next->data))
		lst->next = recurse_sort(lst->next, lst, cmp);
	else
	{
		temp = lst;
		lst = lst->next;
		temp->next = lst->next;
		lst->next = temp;
		prev->next = lst;
		lst->next = recurse_sort(lst->next, lst, cmp);
	}
	return (lst);
}

t_list	*sort_list(t_list *lst, int(*cmp)(int, int))
{
	int 	count;
	int		i;
	t_list	prev;

	count = count_list(lst);
	prev.next = lst;
	i = 0;
	while (i < count)
	{
		lst = recurse_sort(lst, &prev, cmp);
		i++;
	}
	return (lst);
}

/*
int	main(void)
{
	t_list	*lst;
	t_list	lst0;
	t_list	lst1;
	t_list	lst2;
	t_list	lst3;
	t_list	lst4;

	lst = &lst0;
	lst0.data = 12;
	lst1.data = 14;
	lst2.data = 17;
	lst3.data = 11;
	lst4.data = 15;
	lst0.next = &lst1;
	lst1.next = &lst2;
	lst2.next = &lst3;
	lst3.next = &lst4;
	lst4.next = NULL;
	printf("%d, %d, %d, %d, %d\n", lst->data, lst->next->data,
		lst->next->next->data, lst->next->next->next->data, lst->next->next->next->next->data);
	lst = sort_list(&lst0, ascending);
	printf("%d, %d, %d, %d, %d\n", lst->data, lst->next->data,
		lst->next->next->data, lst->next->next->next->data, lst->next->next->next->next->data);
	return (0);
}
*/
