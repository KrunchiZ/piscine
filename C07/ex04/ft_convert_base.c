/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 12:08:49 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/19 20:18:15 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

char	*ft_itoa_base(long number, char *base_to, int base_len);

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

//skip whitespaces and count negative sign, then return ptr at latest loc
char	*if_whitespace_sign(char *str, long *sign)
{
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*sign *= -1;
		str++;
	}
	return (str);
}

//find matching ch in base and save its location in *array
int	if_base(char *base, int *array, int len, char ch)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (ch == base[i])
		{
			*array = i;
			return (1);
		}
		i++;
	}
	return (0);
}

long	ft_atoi_base(char *str, char *base, int len)
{
	long	sign;
	long	number;
	int		index;

	sign = 1;
	number = 0;
	str = if_whitespace_sign(str, &sign);
	while (if_base(base, &index, len, *str))
	{
		number += index;
		if (if_base(base, &index, len, *(str + 1)))
			number *= len;
		str++;
	}
	return (number * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	number;
	int		bf_len;
	int		bt_len;
	char	*convert;

	bf_len = valid_check(base_from);
	bt_len = valid_check(base_to);
	if (bf_len < 2 || bt_len < 2)
		return (NULL);
	number = ft_atoi_base(nbr, base_from, bf_len);
	if (number < INT_MIN || number > INT_MAX)
		return (NULL);
	convert = ft_itoa_base(number, base_to, bt_len);
	if (convert == NULL)
		return (NULL);
	return (convert);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*convert;

	if (argc != 4)
		return (0);
	convert = ft_convert_base(argv[1], argv[2], argv[3]);
	if (!convert)
		return (0);
	else
	{
		printf("%s\n", convert);
		free(convert);
	}
	return (0);
}
*/
