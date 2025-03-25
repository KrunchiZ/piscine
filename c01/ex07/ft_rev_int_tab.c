/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:26:14 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/04 15:06:23 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	front;
	int	last;

	front = 0;
	last = size - 1;
	while (front < (size / 2))
	{
		temp = tab[front];
		tab[front] = tab[last];
		tab[last] = temp;
		front++;
		last--;
	}
}

/*
int	main(void)
{
	int	arr[] = {0, 1, 2, 3, 4};
	int	size = (sizeof(arr) / sizeof(arr[0]));
	int	i;

	i = 0;
	while (i < size)
		printf("%d ", arr[i++]);
	ft_rev_int_tab(arr, size);
	printf("\nReversed: ");
	i = 0;
	while (i < size)
		printf("%d ", arr[i++]);
}
*/
