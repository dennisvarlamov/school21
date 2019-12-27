/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 19:49:47 by nglynis           #+#    #+#             */
/*   Updated: 2019/12/27 08:05:53 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tetra18(char *square, int k, char x)
{
	int 	n;
	int		l;

	n = 0;
	l = 0;
	while (((k + 1) * (k - 1))  > l)
	{
		if (square[0 + l] == x && square[1 + l] == x
			&& square[5 + l + (k - 4)] == x && square[6 + l + (k - 4)] == x)
		{
			n++;
			square[0 + l] = '.';
			square[1 + l] = '.';
			square[5 + l + (k - 4)] = '.';
			square[6 + l + (k - 4)] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	return (tetra18_nrm(square,k,x,l));
}
