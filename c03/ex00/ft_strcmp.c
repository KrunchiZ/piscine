/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:39:23 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/10 10:26:03 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	cmp;

	while (*s1)
	{
		cmp = *s1++ - *s2++;
		if (cmp)
			return (cmp);
	}
	cmp = *s1 - *s2;
	return (cmp);
}

/*
int	main(void)
{
	char	*s1 = "abcd";
	char	*s2 = "abc";
	int		cmp = ft_strcmp(s1, s2);

	if (!cmp)
		printf("\"%s\" matches with \"%s\"", s1, s2);
	else
		printf("\"%s\" and \"%s\" are different", s1, s2);
}
*/
