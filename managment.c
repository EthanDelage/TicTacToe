/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   managment.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelage <edelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:15:55 by edelage           #+#    #+#             */
/*   Updated: 2022/07/31 17:55:40 by edelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "managment.h"

void	init_grid(char grid[3][3])
{
	int	count;
	int	column;
	int	row;

	count = 9;
	row = 0;
	while (row < 3)
	{
		column = 3;
		while (column > 0)
		{
			grid[row][column - 1] = count + '0';
			column--;
			count--;
		}
		row++;
	}
}

void	coord_pawn(int *row, int *column, int number_input)
{
	int number;

	number = number_input - 1;
	*row = abs((number / 3) - 2);
	*column = number % 3;
}


int	is_busy(char grid[3][3], int number_input)
{
	int	row;
	int	column;

	coord_pawn(&row, &column, number_input);
	if (grid[row][column] != 'X' && grid[row][column] != 'O')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	pawn_to_play(int turn)
{
	if (turn % 2 == 0)
	{
		return ('X');
	}
	else
	{
		return ('O');
	}
}

void	place_pawn(char grid[3][3], int number_input, char pawn)
{
	int	row;
	int	column;

	coord_pawn(&row, &column, number_input);
	printf("%d %d\n", row, column);
	grid[row][column] = pawn;
}
