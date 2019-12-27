/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_alg0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 21:30:34 by nglynis           #+#    #+#             */
/*   Updated: 2019/12/27 08:20:53 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		alg0(char *square, int data[])
{
	int		a;
	char	x;

	x = 'A';
	if (data[0] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[0]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[0]);
	if (a == 1)
	{
		if (data[1] < 1 || data[1] > 19)
			return (0);
		alg1(square,data);
	}
	else
		printf("error\n");
	return (0);
}

int		alg1(char *square, int data[])
{
	int		a;
	char	x;

	x = 'B';
	if (data[1] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[1]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[1]);
	if (a == 1)
	{
		if (data[2] < 1 || data[2] > 19)
			return(0);
		alg2(square,data);
	}
	else
		alg0(square,data);
	return (0);
}

int		alg2(char *square, int *data)
{
	int		a;
	char	x;

	x = 'C';
	if (data[2] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[2]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[2]);
	if (a == 1)
	{
		if (data[3] < 1 || data[3] > 19)
			return (0);
		alg3(square,data);
	}
	else
		alg1(square,data);
	return (0);
}

int		alg3(char *square, int *data)
{
	int		a;
	char	x;

	x = 'D';
	if (data[3] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[3]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[3]);
	if (a == 1)
	{
		if (data[4] < 1 || data[4] > 19)
		{
			printf("data[4] : %d\n",data[4]);
			return (0);
		}
		alg4(square,data);
	}
	else
		alg2(square,data);
	return (0);
}

int		alg4(char *square, int *data)
{
	int		a;
	char	x;

	x = 'E';
	if (data[4] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[4]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[4]);
	if (a == 1)
	{
		if (data[5] < 1 || data[5] > 19)
		{
			printf("data[5] : %d\n",data[5]);
			return (0);
		}
		alg5(square,data);
	}
	else
		alg3(square,data);
	return (0);
}
