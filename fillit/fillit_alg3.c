/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_alg3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 21:53:15 by nglynis           #+#    #+#             */
/*   Updated: 2019/12/27 04:24:18 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		alg15(char *square, int *data)
{
	int		a;
	char	x;

	x = 'P';
	if (data[15] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[15]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[15]);
	if (a == 1)
	{
		if (data[16] < 1 || data[16] > 19)
			return (0);
		alg16(square,data);
	}
	else
		alg14(square,data);
	return (0);
}

int		alg16(char *square, int *data)
{
	int		a;
	char	x;

	x = 'Q';
	if (data[16] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[16]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[16]);
	if (a == 1)
	{
		if (data[17] < 1 || data[17] > 19)
			return (0);
		alg17(square,data);
	}
	else
		alg15(square,data);
	return (0);
}

int		alg17(char *square, int *data)
{
	int		a;
	char	x;

	x = 'R';
	if (data[17] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[17]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[17]);
	printf("a:%d\n",a);
	if (a == 1)
	{
		if (data[18] < 1 || data[18] > 19)
			return (0);
		alg18(square,data);
	}
	else
		alg16(square,data);
	return (0);
}

int		alg18(char *square, int *data)
{
	int		a;
	char	x;

	x = 'S';
	if (data[18] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[18]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[18]);
	if (a == 1)
	{
		if (data[19] < 1 || data[19] > 19)
			return (0);
		alg19(square,data);
	}
	else
		alg17(square,data);
	return (0);
}

int		alg19(char *square, int *data)
{
	int		a;
	char	x;

	x = 'T';
	if (data[19] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[19]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[19]);
	if (a == 1)
	{
		if (data[20] < 1 || data[20] > 19)
			return (0);
		alg20(square,data);
	}
	else
		alg18(square,data);
	return (0);
}
