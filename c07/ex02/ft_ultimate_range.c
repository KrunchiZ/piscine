/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:40:04 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/18 12:01:23 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = sizeof(int) * (max - min);
	*range = (int *)malloc(size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min + i < max)
	{
		*(*range + i) = min + i;
		i++;
	}
	return (size);
}

/*
int	main(void)
{
	int	i;
	int	*original;
	int	**range;
	int	range_size;

	range = &original;
	range_size = ft_ultimate_range(range, 0, 3);
	i = 0;
	if (*range)
	{
		while (i < 3)
			printf("%d ", (*range)[i++]);
		free(*range);
	}
	printf("\narray size = %d", range_size);
	return (0);
}
*/
