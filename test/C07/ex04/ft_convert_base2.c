/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:42:01 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/19 19:13:14 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	calc_size(long number, int base_len)
{
	int	size;
	int	neg;

	size = 0;
	neg = 0;
	if (number < 0)
		neg = 1;
	if (number == 0)
		size = 1;
	while (number)
	{
		number /= base_len;
		size++;
	}
	return (size + neg);
}

char	*ft_itoa_base(long number, char *base_to, int base_len)
{
	int		size;
	char	*host;
	int		i;

	size = calc_size(number, base_len);
	host = (char *)malloc(size + 1);
	if (host == NULL)
		return (NULL);
	host[size] = '\0';
	host[0] = base_to[0];
	if (number < 0)
	{
		number *= -1;
		host[0] = '-';
	}
	i = 1;
	while (i <= size && number)
	{
		host[size - i] = base_to[number % base_len];
		i++;
		number /= base_len;
	}
	return (host);
}
