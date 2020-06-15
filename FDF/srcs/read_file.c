/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:34:22 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/24 09:18:36 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			get_height(char *file_name)
{
	int		fd;
	char	*line;
	int		height;

	fd = open(file_name, O_RDONLY, 0);
	height = 0;
	while (get_next_line(fd, &line))
	{
		height++;
		ft_strdel(&line);
	}
	close(fd);
	return (height);
}

int			get_widht(char *file_name, t_fdf *data)
{
	int		widht;
	int		fd;
	char	*line;
	int		t;

	t = 0;
	fd = open(file_name, O_RDONLY, 0);
	while (get_next_line(fd, &line))
	{
		widht = ft_wdcounter(line, ' ');
		if (widht != data->rainboy)
		{
			data->rainboy = widht;
			t++;
		}
		ft_strdel(&line);
	}
	data->rainboy = t;
	close(fd);
	return (widht);
}

void		fill_matrix(int *z_line, char *line)
{
	char	**nums;
	int		i;

	i = 0;
	nums = ft_strsplit(line, ' ');
	while (nums[i])
	{
		z_line[i] = ft_atoi(nums[i]);
		free(nums[i]);
		i++;
	}
	free(nums);
}

void		read_file(char *file_name, t_fdf *data)
{
	int		fd;
	char	*line;
	int		i;

	data->height = get_height(file_name);
	data->width = get_widht(file_name, data);
	data->z_matrix = (int **)malloc(sizeof(int*) * (data->height + 1));
	i = 0;
	while (i < data->height)
		data->z_matrix[i++] = (int*)malloc(sizeof(int) * (data->width + 1));
	fd = open(file_name, O_RDONLY, 0);
	i = 0;
	while (get_next_line(fd, &line))
	{
		fill_matrix(data->z_matrix[i], line);
		ft_strdel(&line);
		i++;
	}
	close(fd);
	data->z_matrix[i] = NULL;
}
