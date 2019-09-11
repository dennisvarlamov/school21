/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 23:54:24 by nglynis           #+#    #+#             */
/*   Updated: 2019/09/12 00:37:41 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*dest;
	size_t			i;

	str = (unsigned char*)src;
	dest = (unsigned char*)dst;
	i = 0;
	if (str < dest)
		while (i++ < n)
			dest[n - i] = str[n - i];
	else
	{
		while (n-- > 0)
			*dest++ = *str++;
	}
	return (dst);
}
