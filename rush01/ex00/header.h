/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:57:49 by kchiang           #+#    #+#             */
/*   Updated: 2025/04/16 01:58:51 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

int	arg_is_invalid(int argc, char *argv);
int	ft_strlen(char *str);
int	solve_puzzle(int clue[4][4], int *answer, int n, int pos);
int	row_is_bad(int *answer, int clue[4][4], int pos);
int	col_is_bad(int *answer, int clue[4][4], int pos);

#endif
