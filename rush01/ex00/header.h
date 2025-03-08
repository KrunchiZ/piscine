/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:57:49 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/08 20:54:56 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdio.h>
# include <unistd.h>

int		ft_check(char *str);
void	check_4(char *argv, char grid[4][8]);
void	check_up_4(char *argv, char grid[4][8]);
void	check_down_4(char *argv, char grid[4][8]);
void	check_left_4(char *argv, char grid[4][8]);
void	check_right_4(char *argv, char grid[4][8]);

#endif
