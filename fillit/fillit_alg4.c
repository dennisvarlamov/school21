/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_alg4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 22:18:50 by nglynis           #+#    #+#             */
/*   Updated: 2019/12/27 04:36:19 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		alg20(char *square, int *data)
{
	int		a;
	char	x;

	x = 'U';
	if (data[20] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[20]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[20]);
	if (a == 1)
	{
		if (data[21] < 1 || data[21] > 19)
			return (0);
		alg21(square,data);
	}
	else
		alg19(square,data);
	return (0);
}

int		alg21(char *square, int *data)
{
	int		a;
	char	x;

	x = 'V';
	if (data[21] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[21]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[21]);
	if (a == 1)
	{
		if (data[22] < 1 || data[22] > 19)
			return (0);
		alg22(square,data);
	}
	else
		alg20(square,data);
	return (0);
}

int		alg22(char *square, int *data)
{
	int		a;
	char	x;

	x = 'W';
	if (data[22] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[22]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[22]);
	if (a == 1)
	{
		if (data[23] < 1 || data[23] > 19)
			return (0);
		alg23(square,data);
	}
	else
		alg21(square,data);
	return (0);
}

int		alg23(char *square, int *data)
{
	int		a;
	char	x;

	x = 'X';
	if (data[23] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[23]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[23]);
	if (a == 1)
	{
		if (data[24] < 1 || data[24] > 19)
			return (0);
		alg24(square,data);
	}
	else
		alg22(square,data);
	return (0);
}

int		alg24(char *square, int *data)
{
	int		a;
	char	x;

	x = 'Y';
	if (data[24] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[24]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[24]);
	if (a == 1)
	{
		if (data[25] < 1 || data[25] > 19)
			return (0);
		alg25(square,data);
	}
	else
		alg23(square,data);
	return (0);
}
