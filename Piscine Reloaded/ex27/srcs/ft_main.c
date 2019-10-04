/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 21:33:24 by nglynis           #+#    #+#             */
/*   Updated: 2019/09/08 18:28:38 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	display(char *filename)
{
	int		file;
	char	character;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &character, 1))
		write(1, &character, 1);
	close(file);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		display(argv[1]);
	return (0);
}
