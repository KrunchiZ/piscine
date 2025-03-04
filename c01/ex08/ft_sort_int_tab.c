/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:26:14 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/04 18:58:41 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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
}

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
