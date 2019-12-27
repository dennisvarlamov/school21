/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 20:42:14 by nglynis           #+#    #+#             */
/*   Updated: 2019/12/27 08:29:53 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tetra4(char *square, int k, char x)
{
	int 	n;
	int		l;

	n = 0;
	l = 0;
	while (((k - 2) * k + (k - 4))  > l)
	{
		if (square[0 + l] == x && square[1 + l] == x
			&& square[6 + l + (k - 4)] == x 
				&& square[11 + l + (2 * (k - 4))] == x)
		{
			n++;
			square[0 + l] = '.';
			square[1 + l] = '.';
			square[6 + l + (k - 4)] = '.';
			square[11 + l+ (2 * (k - 4))] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
 	return (tetra4_nrm(square,k,x,l));
}

int		tetra1(char *square, int k, char x)
{
	int 	n;
	int		l;
	int		r;

	n = 0;
	l = 0;
	r = 0;
	while ((k * k + 4) > l)
	{
		if (square[0 + l] == x && square[1 + l] == x
			&& square[2 + l] == x && square[3 + l] == x)
		{
			n++;
			square[0 + l] = '.';
			square[1 + l] = '.';
			square[2 + l] = '.';
			square[3 + l] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	return (tetra1_nrm(square,k,x,l));
}

int		tetra9(char *square, int k, char x)
{
	int 	n;
	int		l;
	int		r;

	n = 0;
	l = 0;
	r = 0;
	while ((k * k + 4) > l)
	{
		if (square[0 + l] == x && square[5 + l + (k - 4)] == x
			&& square[6 + l + (k - 4)] == x && square[7 + l + (k - 4)] == x)
		{
			n++;
			square[0 + l] = '.';
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
	return (tetra9_nrm(square,k,x,l));
}

int		tetra14(char *square, int k, char x)
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
			&& square[6 + l + (k - 4)] == x && square[7 + l + (k - 4)] == x)
		{
			n++;
			square[0 + l] = '.';
			square[1 + l] = '.';
			square[6 + l + (k - 4)] = '.';
			square[7 + l + (k - 4)] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	return (tetra14_nrm(square,k,x,l));
}

int		ft_fillit0(int	*data, int k)
{
	char	*square;
	size_t		l;
	int		n;
	size_t		a;
	int		b;
	int		d;
	int		f;
	char	*mass;
	char	x;


	l = 8;
	n = 0;
	a = 0;
	b = 0;
	d = 0;
	f = 7;
	x = 'R';
	k = 7;
	square = ft_strnew(0);
	while (ft_strlen(square) < (l * (l + 1)))
	{
		mass = square;
		square = (a == l) ? ft_strjoin(square,"\n") : ft_strjoin(square,".");
		a = (a == l) ? 0 : (a + 1);
	ft_strdel(&mass);
	}
	/* square = ft_strdup("....\n....\n....\n...q\n"; */
	/* data[0] = 19; */
	alg0(square,data);
	/* while ((a = tetra18(square,FIELD_SIZE,x) != -1)) */
	/* { */
	/* 	d++; */
	/* } */
	ft_strdel(&mass);
	ft_strdel(&square);
	return (0);
}
