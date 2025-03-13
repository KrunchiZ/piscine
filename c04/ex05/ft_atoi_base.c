/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:08:32 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/13 11:33:35 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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
char	*if_whitespace_sign(char *str, int *sign)
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

//find the length of radix(base ptr) to determine the base system
//if_whitespace_sign to skip whitespaces and count negative sign
//if_base to find decimal multiplier from the base string
int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	sign;
	int	array;
	int	number;

	sign = 1;
	len = valid_check(base);
	if (len <= 1)
		return (0);
	str = if_whitespace_sign(str, &sign);
	number = 0;
	while (if_base(base, &array, len, *str))
	{
		number += array;
		if (if_base(base, &array, len, *(str + 1)))
			number *= len;
		str++;
	}
	return (number * sign);
}

/*
int	main(void)
{
	char	*str;
	char	*base;
	int		nbr;

	str = "    --++-80000000*sf890";
	base = "0123456789ABCDEF";
	nbr = ft_atoi_base(str, base);
	printf("\"%s\" ft_atoi_base using \"%s\" base system\n", str, base);
	printf("----------\n%d", nbr);
	return (0);
}
*/
