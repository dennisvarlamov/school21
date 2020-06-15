/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabilbo <jabilbo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 07:12:24 by jabilbo           #+#    #+#             */
/*   Updated: 2020/01/29 16:46:20 by jabilbo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		zoom(int key, t_fdf *data)
{
	if (key == 4)
		data->zoom += 15;
	if (key == 16)
		data->zoom -= 10;
	if (data->zoom < 0)
		data->zoom = 1;
	if (data->zoom > 1000)
		data->zoom = 1000;
	if (key == 0)
		data->cos += 0.1;
	if (key == 2)
		data->cos -= 0.1;
	if (key == 13)
		data->sin += 0.1;
	if (key == 1)
		data->sin -= 0.1;
	return (0);
}
