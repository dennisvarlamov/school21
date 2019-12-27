/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_nrm2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 07:54:44 by nglynis           #+#    #+#             */
/*   Updated: 2019/12/27 08:09:57 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tetra10_nrm(char *square, int k, char x, char l)
{
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
}
int		tetra11_nrm(char *square, int k, char x, char l)
{
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
}
int		tetra12_nrm(char *square, int k, char x, char l)
{
	while ((k * k - 4) > l)
	{
		if (square[0 + l] == '.' && square[1 + l] == '.'
			&& square[2 + l] == '.' && square[6 + l + (k - 4)] == '.')
		{
			square[0 + l] = x;
			square[1 + l] = x;
			square[2 + l] = x;
			square[6 + l + (k - 4)] = x;
			printf("square:\n%s\n",square);
			break ;
		}
		l++;
	}
	if ((k * k - 4) > l)
		return (1);
	else
		return (-1);
}
int		tetra13_nrm(char *square, int k, char x, char l)
{
	while (((k - 2) * k + (k - 4)) > l)
	{
		if (square[0 + l] == '.' && square[5 + l + (k - 4)] == '.'
			&& square[6 + l + (k - 4)] == '.'
				&& square[10 + l + (2 * (k - 4))] == '.')
		{
			square[0 + l] = x;
			square[5 + l + (k - 4)] = x;
			square[6 + l + (k - 4)] = x;
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
}
int		tetra14_nrm(char *square, int k, char x, char l)
{
	while ((k * k - 4) > l)
	{
		if (square[0 + l] == '.' && square[1 + l] == '.'
			&& square[6 + l + (k - 4)] == '.' && square[7 + l + (k - 4)] == '.')
		{
			square[0 + l] = x;
			square[1 + l] = x;
			square[6 + l + (k - 4)] = x;
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
}
