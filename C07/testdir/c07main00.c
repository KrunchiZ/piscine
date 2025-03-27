/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c07main00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:23:43 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/17 14:29:31 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	char	*dup;

	if (argc != 2)
		return (0);
	dup = ft_strdup(argv[1]);
	if (dup == NULL)
		printf("Malloc failed");
	else
	{
		printf("Copied: \"%s\"\n", dup);
		free(dup);
	}
	return (0);
}
