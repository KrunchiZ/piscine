/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:42:23 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/26 21:16:48 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_stock_str	*host;

	if (argc < 2)
		return (0);
	host = ft_strs_to_tab(argc - 1, &argv[1]);
	if (host)
	{
		ft_show_tab(host);
		free_host(host, argc - 1);
	}
	return (0);
}
