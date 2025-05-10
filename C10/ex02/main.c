/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 00:42:25 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/11 04:06:33 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libgen.h>

void	ft_tail(int argc, char **argv, int n_bytes, int c_pos);

int	ft_strcmp(char *s1, char *s2)
{
	int	cmp;

	cmp = 0;
	while (*s1)
	{
		cmp = *s1++ - *s2++;
		if (cmp)
			return (cmp);
	}
	return (cmp);
}

int	check_option(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if (ft_strcmp(argv[i], "-c") == 0)
			return (i);
	}
	return (i);
}

void	ft_puterror(char *str)
{
	while (*str)
		write(2, str++, 1);
	return ;
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		n *= 10;
		n += str[i] - '0';
		i++;
	}
	return (n);
}

int	main(int argc, char **argv)
{
	int		c_pos;
	int		n_bytes;

	c_pos = check_option(argc, argv);
	if (c_pos == argc - 1)
	{
		ft_puterror(basename(argv[0]));
		ft_puterror(": option requires an argument -- 'c'\n");
		return (1);
	}
	n_bytes = ft_atoi(argv[c_pos + 1]);
	if (n_bytes == -1)
	{
		ft_puterror(basename(argv[0]));
		ft_puterror(": invalid number of bytes: ‘");
		ft_puterror(argv[c_pos + 1]);
		ft_puterror("’\n");
		return (1);
	}
	ft_tail(argc, argv, n_bytes, c_pos);
	return (0);
}
