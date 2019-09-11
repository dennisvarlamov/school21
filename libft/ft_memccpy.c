/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 01:45:13 by nglynis           #+#    #+#             */
/*   Updated: 2019/09/12 02:05:08 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	i = 0;
	while (n--)
	{
		s1[i] = s2[i];
		if (s1[i] == (unsigned char)c)
			return (dst + i + 1);
		++i;
	}
	return (NULL);
}
int main()
{
	char test0[] = "";
	char test1[] = "qwertyuiop";
	char r;
	int q;

	q = 5;
	r = 'o';
	ft_memccpy(test0,test1,r,q);
	printf("%s",test0);
	return (0);

}
