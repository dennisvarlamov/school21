/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 00:50:01 by nglynis           #+#    #+#             */
/*   Updated: 2019/09/12 00:48:58 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*s;
	int		len;
	int		i;

	len = 0;
	while (src[len])
		len++;
	s = (char*)malloc(sizeof(*s) * (len + 1));
	i = 0;
	while (i < len)
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
