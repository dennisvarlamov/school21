/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabilbo <jabilbo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 01:29:39 by jabilbo           #+#    #+#             */
/*   Updated: 2020/01/29 16:27:41 by jabilbo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <libft.h>
# include <mlx.h>
# include <fcntl.h>
# include <stdio.h>
# include <get_next_line.h>

typedef struct
{
	int				width;
	int				height;
	int				**z_matrix;
	int				zoom;
	int				color;
	int				shift_x;
	int				shift_y;
	int				rainboy;
	float			cos;
	float			sin;
	int				key;
	void			*mlx_ptr;
	void			*win_ptr;
}					t_fdf;

typedef struct
{
	float			x;
	float			y;
	float			x1;
	float			y1;
	int				z;
	int				z1;
	float			c_x;
	float			s_y;
}					t_fdf1;

int					zoom(int key, t_fdf *data);
void				isometric(float *x, float *y, int z, t_fdf *data);
void				read_file(char *file_name, t_fdf *data);
void				bresenham(t_fdf1 str, t_fdf *data);
void				draw(t_fdf *data);
void				memfree(t_fdf *data);

#endif
