/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:57:49 by kchiang           #+#    #+#             */
/*   Updated: 2025/08/12 19:43:25 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

typedef struct s_var
{
	int	line_size;
	int	ans_size
	int	n;
	int	pos;
}		t_var;

int	arg_is_invalid(int argc, char *argv);
int	ft_strlen(char *str);
int	solve_puzzle(int **clue, int *answer, t_var var);
int	row_is_bad(int *answer, int **clue, int pos);
int	col_is_bad(int *answer, int **clue, int pos);

#endif
