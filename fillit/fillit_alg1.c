/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_alg1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 21:42:57 by nglynis           #+#    #+#             */
/*   Updated: 2019/12/27 04:21:40 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		alg5(char *square, int *data)
{
	int		a;
	char	x;

	x = 'F';
	if (data[5] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[5]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[5]);
	if (a == 1)
	{
		if (data[6] < 1 || data[6] > 19)
			return (0);
		alg6(square,data);
	}
	else
		alg4(square,data);
	return (0);
}

int		alg6(char *square, int *data)
{
	int		a;
	char	x;

	x = 'G';
	if (data[6] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[6]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[6]);
	if (a == 1)
	{
		if (data[7] < 1 || data[7] > 19)
			return (0);
		alg7(square,data);
	}
	else
		alg5(square,data);
	return (0);
}

int		alg7(char *square, int *data)
{
	int		a;
	char	x;

	x = 'H';
	if (data[7] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[7]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[7]);
	if (a == 1)
	{
		if (data[8] < 1 || data[8] > 19)
			return (0);
		alg8(square,data);
	}
	else
		alg6(square,data);
	return (0);
}

int		alg8(char *square, int *data)
{
	int		a;
	char	x;

	x = 'I';
	if (data[8] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[8]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[8]);
	if (a == 1)
	{
		if (data[9] < 1 || data[9] > 19)
			return (0);
		alg9(square,data);
	}
	else
		alg7(square,data);
	return (0);
}

int		alg9(char *square, int *data)
{
	int		a;
	int		x;

	x = 'J';
	if (data[9] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[9]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[9]);
	if (a == 1)
	{
		if (data[10] < 1 || data[10] > 19)
			return (0);
		alg10(square,data);
	}
	else
		alg8(square,data);
	return (0);
}
