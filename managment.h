/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   managment.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelage <edelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:22:24 by edelage           #+#    #+#             */
/*   Updated: 2022/07/31 17:40:56 by edelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MANAGMENT_H

void	init_grid(char grid[3][3]);
void	coord_pawn(int *row, int *column, int number_input);
int		is_busy(char grid[3][3], int number_input);
char	pawn_to_play(int turn);
void	place_pawn(char grid[3][3], int number_input, char pawn);

#endif
