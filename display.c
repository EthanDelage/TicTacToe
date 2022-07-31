/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelage <edelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:02:24 by edelage           #+#    #+#             */
/*   Updated: 2022/07/31 16:07:38 by edelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "display.h"

void	separator(void)
{
	printf("---+---+---\n");
}

void	line(char line[])
{
	int	count;

	count = 0;
	while (count < 11)
	{
		if (count % 4 == 3)
		{
			printf("|");
		}
		else if (count % 4 == 1)
		{
			printf("%c", line[count / 4]);
		}
		else
		{
			printf(" ");
		}
		count++;
	}
	printf("\n");
}

void	display_grid(char grid[3][3])
{
	int	count;

	count = 0;
	while (count < 5)
	{
		if (count % 2 == 0)
		{
			line(grid[count / 2]);
		}
		else
		{
			separator();
		}
		count++;
	}
}
