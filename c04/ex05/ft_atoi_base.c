/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:08:32 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/12 20:48:12 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//check if base is unique and i > 1, then return i to len
int	valid_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-'
				|| (9 <= base[i] && base[i] <= 13))
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

//find the length of radix(base ptr) to determine the base system
int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	sign;

	sign = 1;
	len = valid_check(base);
	if (len <= 1)
		return (0);
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
	}
	//after this, use compare to find matching character in base
	//and return the array number to multiply with the len
