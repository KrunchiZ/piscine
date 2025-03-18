/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c07main01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:08:34 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/18 12:13:45 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*array;
	int	i;

	i = 0;
	array = ft_range(i, 3);
	if (array)
	{
		while (i < 3)
			printf("%d ", array[i++]);
		free(array);
	}
	return (0);
}
