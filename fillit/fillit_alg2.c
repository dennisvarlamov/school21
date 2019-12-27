/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_alg2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 21:48:59 by nglynis           #+#    #+#             */
/*   Updated: 2019/12/27 04:23:58 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		alg10(char *square, int *data)
{
	int		a;
	char	x;

	x = 'K';
	if (data[10] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[10]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[10]);
	if (a == 1)
	{
		if (data[11] < 1 || data[11] > 19)
			return (0);
		alg11(square,data);
	}
	else
		alg9(square,data);
	return (0);
}

int		alg11(char *square, int *data)
{
	int		a;
	char	x;

	x = 'L';
	if (data[11] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[11]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[11]);
	if (a == 1)
	{
		if (data[12] < 1 || data[12] > 19)
			return (0);
		alg12(square,data);
	}
	else
		alg10(square,data);
	return (0);
}

int		alg12(char *square, int *data)
{
	int		a;
	char	x;

	x = 'M';
	if (data[12] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[12]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[12]);
	if (a == 1)
	{
		if (data[13] < 1 || data[13] > 19)
			return (0);
		alg13(square,data);
	}
	else
		alg11(square,data);
	return (0);
}

int		alg13(char *square, int *data)
{
	int		a;
	char	x;

	x = 'N';
	if (data[13] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[13]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[13]);
	if (a == 1)
	{
		if (data[14] < 1 || data[14] > 19)
			return (0);
		alg14(square,data);
	}
	else
		alg12(square,data);
	return (0);
}

int		alg14(char *square, int *data)
{
	int		a;
	char	x;

	x = 'O';
	if (data[14] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[14]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[14]);
	if (a == 1)
	{
		if (data[15] < 1 || data[15] > 19)
			return (0);
		alg15(square,data);
	}
	else
		alg13(square,data);
	return (0);
}

