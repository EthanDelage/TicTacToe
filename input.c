/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelage <edelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:48:13 by edelage           #+#    #+#             */
/*   Updated: 2022/07/31 16:31:26 by edelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "input.h"
#include "managment.h"

int	player_choice(char grid[3][3], char pawn_to_play)
{
	int	place;
	int	place_busy;

	place = 0;
	place_busy = 1;
	while (place_busy)
	{
		printf("It's player'%c's turn: ", pawn_to_play);
		scanf("%d", &place);
		place_busy = is_busy(grid, place);
	}
}
