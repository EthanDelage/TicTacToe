/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelage <edelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:01:07 by edelage           #+#    #+#             */
/*   Updated: 2022/07/31 15:26:48 by edelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "display.h"
#include "managment.h"

int	main(void)
{
	char	grid[3][3];

	init_grid(grid);
	display_grid(grid);
	return (0);
}
