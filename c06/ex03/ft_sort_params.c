/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 17:55:18 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/17 19:51:43 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_arg(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
	return ;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	cmp;

	while (*s1)
	{
		cmp = *s1++ - *s2++;
		if (cmp)
			return (cmp);
	}
	return (*s1 - *s2);
}

void	print_arg(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
		put_arg(argv[i++]);
	return ;
}

char	**sort_argv(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	if (argc == 2)
		put_arg(argv[1]);
	else
	{
		sort_argv(argc, argv);
		print_arg(argc, argv);
	}
	return (0);
}
