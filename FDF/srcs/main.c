/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabilbo <jabilbo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:25:27 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/30 14:42:00 by jabilbo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			deal_key(int key, t_fdf *data)
{
	zoom(key, data);
	if (key == 126)
		data->shift_y -= 30;
	if (key == 125)
		data->shift_y += 30;
	if (key == 124)
		data->shift_x += 30;
	if (key == 123)
		data->shift_x -= 30;
	if (key == 40)
		data->key = data->key * -1;
	if (key == 5)
		data->rainboy += 1;
	if (data->rainboy > 2)
		data->rainboy = 0;
	if (key == 53)
		exit(0);
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	draw(data);
	return (0);
}

int			vallid(t_fdf data)
{
	int		q;
	int		i;

	q = 1;
	i = 0;
	if (data.height < 2 || data.rainboy > 1 || data.width < 2)
	{
		ft_putstr("error, it's not a rectangle\n");
		q = 0;
	}
	return (q);
}

int			vallid1(char *argv)
{
	int		i;
	char	*line;
	int		fd;
	int		q;

	i = 0;
	q = 1;
	fd = open(argv, O_RDONLY);
	while (get_next_line(fd, &line))
	{
		while (line[i])
		{
			if ((line[i] == 'x' && ft_isspace(line[i + 1])) || (line[i] != 32
			&& line[i] != '-' && line[i] != 'x' && (line[i] < 47
			|| line[i] > 58) && line[i] != ',' && ft_isupper(line[i]) == 0))
			{
				q = 0;
				break ;
			}
			i++;
		}
		i = 0;
		ft_strdel(&line);
	}
	return (q);
}

int			main(int argc, char **argv)
{
	t_fdf		data;

	if (argc != 2)
	{
		ft_putstr("error, invalid number of arguments\n");
		return (0);
	}
	read_file(argv[1], &data);
	if (vallid(data) != 0 && vallid1(argv[1]) != 0)
	{
		data.mlx_ptr = mlx_init();
		data.win_ptr = mlx_new_window(data.mlx_ptr, 1000, 1000, "FDF");
		data.zoom = 20;
		data.cos = 0.8;
		data.sin = 0.8;
		data.key = 1;
		data.rainboy = 0;
		draw(&data);
		mlx_key_hook(data.win_ptr, deal_key, &data);
		mlx_loop(data.mlx_ptr);
	}
	return (0);
}
