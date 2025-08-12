/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:26:14 by kchiang           #+#    #+#             */
/*   Updated: 2025/07/11 17:53:16 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

static void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	return ;
}

static int	ft_partition(int *tab, int start, int end)
{
	int	pivot;
	int	pvt_index;
	int	i;
	int	tmp;

	pivot = tab[end];
	i = 0;
	pvt_index = 0;
	while (i < end)
	{
		if (tab[i] <= pivot)
		{
			ft_swap(&tab[i], &tab[pvt_index]);
			pvt_index++;
		}
		i++;
	}
	ft_swap(&tab[end], &tab[pvt_index]);
	return (pvt_index);
}

static void	ft_quicksort(int *tab, int start, int end)
{
	int	pvt_index;

	if (start < end)
	{
		pvt_index = ft_partition(tab, start, end);
		ft_quicksort(tab, pvt_index + 1, end);
		ft_quicksort(tab, start, pvt_index + 1);
	}
	return ;
}

void	ft_sort_int_tab(int *tab, int size)
{
	ft_quicksort(tab, 0, size - 1);
	return ;
}
/*
void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	round;
	int	i;

	round = 0;
	while (round < size)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		round++;
	}
}*/

/*
int	main(void)
{
	int	arr[] = {4, 1, 5, 2, 3};
	int	size = (sizeof(arr) / sizeof(arr[0]));
	int	i;

	i = 0;
	while (i < size)
		printf("%d ", arr[i++]);
	ft_sort_int_tab(arr, size);
	printf("\nSorted: ");
	i = 0;
	while (i < size)
		printf("%d ", arr[i++]);
}
*/
