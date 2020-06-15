/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabilbo <jabilbo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:07:24 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/29 16:41:29 by jabilbo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <math.h>

void		isometric(float *x, float *y, int z, t_fdf *data)
{
	if (data->key != 1)
	{
		*x = (*x - *y) * cos(data->cos);
		*y = (*x + *y) * sin(data->sin) - z;
	}
}

void		fdf0(t_fdf1 *str, t_fdf *data)
{
	str->z = data->z_matrix[(int)str->y][(int)str->x];
	str->z1 = data->z_matrix[(int)str->y1][(int)str->x1];
	str->x *= data->zoom;
	str->y *= data->zoom;
	str->x1 *= data->zoom;
	str->y1 *= data->zoom;
	if (data->rainboy == 0)
		data->color = (str->z || str->z1) ? 0xDC143C : 0x006400;
	if (data->rainboy == 1)
		data->color = (str->z || str->z1) ? 0x00BFFF : 0xFF00FF;
	if (data->rainboy == 2)
		data->color = (str->z || str->z1) ? 0xFFEFD5 : 0xDAA520;
	isometric(&str->x, &str->y, str->z, data);
	isometric(&str->x1, &str->y1, str->z1, data);
}

void		bresenham(t_fdf1 str, t_fdf *data)
{
	float	x_step;
	float	y_step;
	int		max1;

	fdf0(&str, data);
	str.x += data->shift_x;
	str.y += data->shift_y;
	str.x1 += data->shift_x;
	str.y1 += data->shift_y;
	x_step = str.x1 - str.x;
	y_step = str.y1 - str.y;
	max1 = ft_max(ft_mod(x_step), ft_mod(y_step));
	x_step /= max1;
	y_step /= max1;
	while ((int)(str.x - str.x1) || (int)(str.y - str.y1))
	{
		mlx_pixel_put(data->mlx_ptr, data->win_ptr, str.x, str.y, data->color);
		str.x += x_step;
		str.y += y_step;
	}
}

void		draw(t_fdf *data)
{
	t_fdf1	str;

	str.y = 0;
	while (str.y < data->height)
	{
		str.x = 0;
		while (str.x < data->width)
		{
			if (str.x < data->width - 1)
			{
				str.x1 = str.x + 1;
				str.y1 = str.y;
				bresenham(str, data);
			}
			if (str.y < data->height - 1)
			{
				str.x1 = str.x;
				str.y1 = str.y + 1;
				bresenham(str, data);
			}
			str.x++;
		}
		str.y++;
	}
}
