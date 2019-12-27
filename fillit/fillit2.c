/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 08:35:21 by nglynis           #+#    #+#             */
/*   Updated: 2019/12/27 07:39:05 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tetra0(char *square, int k, char x)
{
	int 	n;
	int		l;

	n = 0;
	l = 0;
	while ((k * k + 4) > l)
	{
		if (square[0 + l] == x && square[5 + l + (k - 4)] == x
			&& square[10 + l + (2 * (k - 4))] == x 
				&& square[15 + l + (3 * (k - 4))] == x)
		{
			n++;
			square[0 + l] = '.';
			square[5 + l + (k - 4)] = '.';
			square[10 + l + (2 * (k - 4))] = '.';
			square[15 + l + (3 * (k - 4))] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	return (tetra0_nrm(square,k,x,l));
}

int		tetra2(char *square, int k, char x)
{
	int 	n;
	int		l;

	n = 0;
	l = 0;
	while (((k - 2) * k + (k - 4)) > l)
	{
		if (square[0 + l] == x && square[5 + l + (k - 4)] == x
			&& square[10 + l + (2 * (k - 4))] == x 
				&& square[11 + l + (2 * (k - 4))] == x)
		{
			n++;
			square[0 + l] = '.';
			square[5 + l + (k - 4)] = '.';
			square[10 + l + (2 * (k - 4))] = '.';
			square[11 + l + (2 * (k - 4))] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	return (tetra2_nrm(square,k,x,l));
}

int		tetra3(char *square, int k, char x)
{
	int 	n;
	int		l;

	n = 0;
	l = 0;
	if (square[(k * k + (k - 2)) - 2] == x &&
		square[(k * k + (k - 2)) - 1] == x &&
			square[(k * k + (k - 2))] == x &&
				square[(k * k + (k - 2)) - k - 1] == x)
		return (-1);
	while ((k * k + 4) > l)
	{
		if (square[2 + l] == x && square[5 + l + (k - 4)] == x
			&& square[6 + l + (k - 4)] == x && square[7 + l + (k - 4)] == x)
		{
			n++;
			square[2 + l] = '.';
			square[5 + l + (k - 4)] = '.';
			square[6 + l + (k - 4)] = '.';
			square[7 + l + (k - 4)] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	return (tetra3_nrm(square,k,x,l));
}

int		tetra5(char *square, int k, char x)
{
	int 	n;
	int		l;

	n = 0;
	l = 0;
	while ((k * k + 4) > l)
	{
		if (square[0 + l] == x && square[1 + l] == x
			&& square[2 + l] == x && square[5 + l + (k - 4)] == x)
		{
			n++;
			square[0 + l] = '.';
			square[1 + l] = '.';
			square[2 + l] = '.';
			square[5 + l + (k - 4)] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	return (tetra5_nrm(square,k,x,l));
}
