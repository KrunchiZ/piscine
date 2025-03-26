/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:23:28 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/26 19:13:33 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

void	ft_show_tab(t_stock_str *par);
t_stock_str	*ft_strs_to_tab(int ac, char **av);
void	free_host(t_stock_str *host, int depth);

typedef struct	s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
} t_stock_str;

#endif
