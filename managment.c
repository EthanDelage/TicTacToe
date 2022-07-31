/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   managment.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelage <edelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:15:55 by edelage           #+#    #+#             */
/*   Updated: 2022/07/31 15:38:46 by edelage          ###   ########.fr       */
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
