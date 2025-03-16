/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:39:23 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/16 19:58:11 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				cmp;
	unsigned int	i;

	i = 0;
	cmp = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		cmp = s1[i] - s2[i];
		if (cmp)
			return (cmp);
		i++;
	}
	return (cmp);
}

/*
int	main(void)
{
	char	*s1 = "";
	char	*s2 = "";
	int		n = 3;
	int		cmp = ft_strncmp(s1, s2, n);

	if (!cmp)
		printf("\"%s\" matches with \"%s\" at first %d byte", s1, s2, n);
	else
		printf("\"%s\" and \"%s\" are different at first %d byte", s1, s2, n);
}
*/
