/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelage <edelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:23:24 by edelage           #+#    #+#             */
/*   Updated: 2022/07/31 17:56:29 by edelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "display.h"
#include "input.h"
#include "managment.h"

void	input_turn(char grid[3][3], char pawn_to_play)
{
	int	place;

	place = player_choice(grid, pawn_to_play);
	place_pawn(grid, place, pawn_to_play);
}

void	play(char grid[3][3])
{
	int	turn;
	int 	win;
	char		pawn;
	
	turn = 0;
	win = 0;
	init_grid(grid);
	while (!win && turn < 9)
	{
		pawn = pawn_to_play(turn);
		display_grid(grid);
		input_turn(grid, pawn);
		turn++;
	}
}
