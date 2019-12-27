/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_alg5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 22:23:19 by nglynis           #+#    #+#             */
/*   Updated: 2019/12/27 08:20:29 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		alg25(char *square, int *data)
{
	int		a;
	char	x;

	x = 'Z';
	if (data[25] < 11)
		a = ft_checker0(square,FIELD_SIZE,x,&data[25]);
	else
		a = ft_checker1(square,FIELD_SIZE,x,&data[25]);
	if (a == 1)
			return (0);
	else
		alg24(square,data);
	return (0);
}

int		ft_checker0(char *square, int size, char symbol, int *num)
{
	if (*num == 1)
		return (tetra1(square,size,symbol));
	if (*num == 2)
		return (tetra2(square,size,symbol));
	if (*num == 3)
		return (tetra3(square,size,symbol));
	if (*num == 4)
		return (tetra4(square,size,symbol));
	if (*num == 5)
		return (tetra5(square,size,symbol));
	if (*num == 6)
		return (tetra6(square,size,symbol));
	if (*num == 7)
		return (tetra7(square,size,symbol));
	if (*num == 8)
		return (tetra8(square,size,symbol));
	if (*num == 9)
		return (tetra9(square,size,symbol));
	if (*num == 10)
		return (tetra10(square,size,symbol));
	return (0);
}

int		ft_checker1(char *square, int size, char symbol, int *num)
{
	if (*num == 11)
		return (tetra11(square,size,symbol));
	if (*num == 12)
		return (tetra12(square,size,symbol));
	if (*num == 13)
		return (tetra13(square,size,symbol));
	if (*num == 14)
		return (tetra14(square,size,symbol));
	if (*num == 15)
		return (tetra15(square,size,symbol));
	if (*num == 16)
		return (tetra16(square,size,symbol));
	if (*num == 17)
		return (tetra17(square,size,symbol));
	if (*num == 18)
		return (tetra18(square,size,symbol));
	if (*num == 19)
		return (tetra0(square,size,symbol));
	return(0);
}
