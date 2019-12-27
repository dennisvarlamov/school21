/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 19:16:16 by nglynis           #+#    #+#             */
/*   Updated: 2019/12/27 08:06:51 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tetra12(char *square, int k, char x)
{
	int 	n;
	int		l;
	int		r;

	n = 0;
	l = 0;
	r = 0;
	while ((k * k - 4) > l)
	{
		if (square[0 + l] == x && square[1 + l] == x
			&& square[2 + l] == x && square[6 + l + (k - 4)] == x)
		{
			n++;
			square[0 + l] = '.';
			square[1 + l] = '.';
			square[2 + l] = '.';
			square[6 + l + (k - 4)] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	return (tetra12_nrm(square,k,x,l));
}

int		tetra13(char *square, int k, char x)
{
	int 	n;
	int		l;

	n = 0;
	l = 0;
	while (((k - 2) * k + (k - 4)) > l)
	{
		if (square[0 + l] == x && square[5 + l + (k - 4)] == x
			&& square[6 + l + (k - 4)] == x 
				&& square[10 + l + (2 * (k - 4))] == x)
		{
			n++;
			square[0 + l] = '.';
			square[5 + l + (k - 4)] = '.';
			square[6 + l + (k - 4)] = '.';
			square[10 + l + (2 * (k - 4))] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	return (tetra13_nrm(square,k,x,l));
}

int		tetra15(char *square, int k, char x)
{
	int 	n;
	int		l;

	n = 0;
	l = 0;
	while (((k - 2) * k + (k - 4)) > l)
	{
		if (square[1 + l] == x && square[5 + l + (k - 4)] == x
			&& square[6 + l + (k - 4)] == x 
				&& square[10 + l + (2 * (k - 4))] == x)
		{
			n++;
			square[1 + l] = '.';
			square[5 + l + (k - 4)] = '.';
			square[6 + l + (k - 4)] = '.';
			square[10 + l + (2 * (k - 4))] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	return (tetra15_nrm(square,k,x,l));
}

int		tetra16(char *square, int k, char x)
{
	int 	n;
	int		l;
	int		r;

	n = 0;
	l = 0;
	r = 0;
	while ((k * k - 4) > l)
	{
		if (square[1 + l] == x && square[2 + l] == x
			&& square[5 + l + (k - 4)] == x && square[6 + l + (k - 4)] == x)
		{
			n++;
			square[1 + l] = '.';
			square[2 + l] = '.';
			square[5 + l + (k - 4)] = '.';
			square[6 + l + (k - 4)] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	return (tetra16_nrm(square,k,x,l));
}

int		tetra17(char *square, int k, char x)
{
	int 	n;
	int		l;

	n = 0;
	l = 0;
	while (((k - 2) * k + (k - 4)) > l)
	{
		if (square[0 + l] == x && square[5 + l + (k - 4)] == x
			&& square[6 + l + (k - 4)] == x 
				&& square[11 + l + (2 *(k - 4))] == x)
		{
			n++;
			square[0 + l] = '.';
			square[5 + l + (k - 4)] = '.';
			square[6 + l + (k - 4)] = '.';
			square[11 + l + (2 * (k - 4))] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	return (tetra17_nrm(square,k,x,l));
}
