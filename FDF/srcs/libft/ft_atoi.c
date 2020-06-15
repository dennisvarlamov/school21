/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabilbo <jabilbo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:50:44 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/24 01:16:28 by jabilbo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long	nb;
	int			negative;

	nb = 0;
	negative = 1;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	if (*str == '-')
		negative = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		if (nb > nb * 10 + (*str - '0'))
		{
			if (negative == -1)
				return (0);
			else
				return (-1);
		}
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (nb * negative);
}
