/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 00:50:01 by nglynis           #+#    #+#             */
/*   Updated: 2019/09/09 19:12:34 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s;
	int		len;
	int		i;

	len = 0;
	while (src[len])
		len++;
	if (!(s = (char*)malloc(sizeof(*s) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
