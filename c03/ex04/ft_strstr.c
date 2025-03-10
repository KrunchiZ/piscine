/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:20:42 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/10 19:14:19 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				cmp;
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		cmp = s1[i] - s2[i];
		if (cmp)
			return (cmp);
		i++;
	}
	return (cmp);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	len;

	len = ft_strlen(to_find);
	while (*str)
	{
		if (ft_strncmp(str, to_find, len))
			str++;
		else
			return (str);
	}
	return (NULL);
}

/*
int	main(void)
{
	char	*string = "Hello, World!";
	char	*word = "Wo";
	char	*search_result;
	long	position;

	search_result = ft_strstr(string, word);
	if (search_result)
	{
		position = search_result - string;
		printf("\"%s\" is found at position: %ld.", word, position);
	}
	else
		printf("\"%s\" is not found in \"%s\".", word, string);
	return (0);
}
*/
