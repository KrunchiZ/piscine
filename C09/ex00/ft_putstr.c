/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:49:09 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/11 16:18:27 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//write then move pointer to the next character in string
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	return ;
}

/*
int	main(void)
{
	ft_putstr("This string indicates that the code is working.");
	return (0);
}
*/
