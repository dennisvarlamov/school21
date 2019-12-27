/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 18:37:07 by nglynis           #+#    #+#             */
/*   Updated: 2019/12/27 07:45:26 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tetra6(char *square, int k, char x)
{
	int 	n;
	int		l;

	n = 0;
	l = 0;
	while (((k - 2) * k + (k - 4)) > l)
	{
		if (square[1 + l] == x && square[6 + l + (k - 4)] == x
			&& square[10 + l + (2 * (k - 4))] == x 
				&& square[11 + l + (2 * (k - 4))] == x)
		{
			n++;
			square[1 + l] = '.';
			square[6 + l + (k - 4)] = '.';
			square[10 + l + (2 * (k - 4))] = '.';
			square[11 + l + (2 * (k - 4))] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	while (((k - 2) * k + (k - 4)) > l)
	{
		if (square[1 + l] == '.' && square[6 + l + (k - 4)] == '.'
			&& square[10 + l + (2 * (k - 4))] == '.' 
				&& square[11 + l + (2 * (k - 4))] == '.')
		{
			square[1 + l] = x;
			square[6 + l + (k - 4)] = x;
			square[10 + l + (2 * (k - 4))] = x;
			square[11 + l + (2 * (k - 4))] = x;
			printf("square:\n%s\n",square);
			break ;
		}
		l++;
	}
	if (((k - 2) * k + (k - 4)) > l)
		return (1);
	else
		return (-1);
	return (tetra6_nrm(square,k,x,l));
}

int		tetra7(char *square, int k, char x)
{
	int 	n;
	int		l;

	n = 0;
	l = 0;
	while ((k * k - 4) > l)
	{
		if (square[0 + l] == x && square[1 + l] == x
			&& square[2 + l] == x && square[7 + l + (k - 4)] == x)
		{
			n++;
			square[0 + l] = '.';
			square[1 + l] = '.';
			square[2 + l] = '.';
			square[7 + l + (k - 4)] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	while ((k * k - 4) > l)
	{
		if (square[0 + l] == '.' && square[1 + l] == '.'
			&& square[2 + l] == '.' && square[7 + l + (k - 4)] == '.')
		{
			square[0 + l] = x;
			square[1 + l] = x;
			square[2 + l] = x;
			square[7 + l + (k - 4)] = x;
			printf("square:\n%s\n",square);
			break ;
		}
		l++;
	}
	if ((k * k - 4) > l)
		return (1);
	else
		return (-1);
	return (tetra7_nrm(square,k,x,l));
}

int		tetra8(char *square, int k, char x)
{
	int 	n;
	int		l;

	n = 0;
	l = 0;
	while (((k - 2) * k + (k - 4)) > l)
	{
		if (square[0 + l] == x && square[1 + l] == x
			&& square[5 + l + (k - 4)] == x 
				&& square[10 + l + (2 * (k - 4))] == x)
		{
			n++;
			square[0 + l] = '.';
			square[1 + l] = '.';
			square[5 + l + (k - 4)] = '.';
			square[10 + l + (2 * (k - 4))] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	while (((k - 2) * k + (k - 4)) > l)
	{
		if (square[0 + l] == '.' && square[1 + l] == '.'
			&& square[5 + l + (k - 4)] == '.' 
				&& square[10 + l + (2 * (k - 4))] == '.')
		{
			square[0 + l] = x;
			square[1 + l] = x;
			square[5 + l + (k - 4)] = x;
			square[10 + l + (2 * (k - 4))] = x;
			printf("square:\n%s\n",square);
			break ;
		}
		l++;
	}
	if (((k - 2) * k + (k - 4)) > l)
		return (1);
	else
		return (-1);
	return (tetra8_nrm(square,k,x,l));
}

int		tetra10(char *square, int k, char x)
{
	int 	n;
	int		l;

	n = 0;
	l = 0;
	while ((k * k + 4) > l)
	{
		if (square[1 + l] == x && square[5 + l + (k - 4)] == x
			&& square[6 + l + (k - 4)] == x 
				&& square[7 + l + (k - 4)] == x)
		{
			n++;
			square[1 + l] = '.';
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
	while ((k * k + 4) > l)
	{
		if (square[1 + l] == '.' && square[5 + l + (k - 4)] == '.'
			&& square[6 + l + (k - 4)] == '.' 
				&& square[7 + l + (k - 4)] == '.')
		{
			square[1 + l] = x;
			square[5 + l + (k - 4)] = x;
			square[6 + l + (k - 4)] = x;
			square[7 + l + (k - 4)] = x;
			printf("square:\n%s\n",square);
			break ;
		}
		l++;
	}
	if ((k * k + 4) > l)
		return (1);
	else
		return (-1);
	return (tetra10_nrm(square,k,x,l));
}

int		tetra11(char *square, int k, char x)
{
	int 	n;
	int		l;

	n = 0;
	l = 0;
	while (((k - 2) * k + (k - 4)) > l)
	{
		if (square[5 + l + (k - 4)] == x && square[1 + l] == x
			&& square[6 + l + (k - 4)] == x 
				&& square[11 + l + (2 * (k - 4))] == x)
		{
			n++;
			square[5 + l + (k - 4)] = '.';
			square[1 + l] = '.';
			square[6 + l + (k - 4)] = '.';
			square[11 + l + (2 * (k - 4))] = '.';
			l++;
			break ;
		}
		l++;
	}
	if (n == 0)
		l = 0;
	while (((k - 2) * k + (k - 4)) > l)
	{
		if (square[5 + l + (k - 4)] == '.' && square[1 + l] == '.'
			&& square[6 + l + (k - 4)] == '.' 
				&& square[11 + l + (2 * (k - 4))] == '.')
		{
			square[5 + l + (k - 4)] = x;
			square[1 + l] = x;
			square[6 + l + (k - 4)] = x;
			square[11 + l + (2 * (k - 4))] = x;
			printf("square:\n%s\n",square);
			break ;
		}
		l++;
	}
	if (((k - 2) * k + (k - 4)) > l) 
		return (1);
	else
		return (-1);
	return (tetra11_nrm(square,k,x,l));
}
