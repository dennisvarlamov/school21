
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:03:11 by nglynis           #+#    #+#             */
/*   Updated: 2019/12/27 08:29:31 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t		ft_countchr(const char *s, int c)
{
	size_t		j;

	j = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			j++;
		s++;
	}
	return (j);
}

char	*ft_numbchr(const char *s, int c, int k)
{
	int		j;

	j = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			j++;
		if ( k == j)
			return ((char*)s);
		s++;
	}
	return (0);
}
int		ft_check1(char *s, size_t k)
{
	int i;
	int j;

	i = 0;
	j = k;
	while (j >= 0)
		j -= 4;
	j += 4;
	if ((k > 3) && s[k - 4] == '#')
		i++;
	if ((k + 4) < 17 && s[k + 4] == '#')
		i++;
	if (j != 0 && s[k - 1] == '#')
			i++;
	if (j != 3 && s[k + 1] == '#')
			i++;
	return (i);
}
int			ft_check2(char *str)
{
	int		j;
	x_list  x;
	char *I1[19]= {"#...#...#...#", "####", "#...#...##", "#.###",
		"##...#...#", "###.#", "#...#..##", "###...#", "##..#...#",
		"#...###", "#..###", "#..##...#", "###..#","#...##..#",
		"##...##", "#..##..#","##.##", "#...##...#", "##..##"};

	j =  0;
	x.nol1 = ft_numbchr(str,'#',1);
	x.nol2 = ft_numbchr(str,'#',2);
	x.nol3 = ft_numbchr(str,'#',3);
	x.nol4 = ft_numbchr(str,'#',4);
	x.a = ft_check1(str,x.nol1 - str);
	x.b = ft_check1(str,x.nol2 - str);
	x.c = ft_check1(str,x.nol3 - str);
	x.d = ft_check1(str,x.nol4 - str);
	if ((x.a * x.b * x.c * x.d == 0) || (x.b < 2 && x.c < 2 && x.a < 2))
		return (0);
	str = ft_strsub(str,x.nol1 - str , x.nol4 - x.nol1 + 1);
	while (ft_strcmp(I1[j],str) != 0)
		j++;
	ft_strdel(&str);
	if (j == 0)
		j = 19;
	return (j);
}

int		main(int argc, char **argv)
{
	int fd;
	char *line1;
	char *str;
	char *mass;
	int		i;
	int		j;
	int		q;
	int		*data;
	
	i = 0;
	j = 0;
	q = 0;
	if (argc < 2)
	{
		printf("Usage %s <filename>\n",argv[0]);
		return(0);
	}

	fd = open(argv[1],O_RDONLY);
	data = ft_memalloc(25);
	while (get_next_line(fd,&line1) > 0)
	{
		mass = str;
		str = !(str) ? ft_strdup(line1) : ft_strjoin(str, line1);
		if ((ft_strlen(line1) != 0 && ft_strlen(line1) != 4)
				||  ft_strlen(str) > 16)
		{
			printf("INVALID\n");
			return (0);
		}
		if (ft_strlen(line1) == 0 && (str == NULL || ft_strlen(str) != 16))
		{
				printf("INVALID\n");
				return(0);
		}
		if (ft_strlen(line1) == 0 && ft_strlen(str) == 16)
		{
			if (ft_strlen(str) == 16 && ft_countchr(str,'.') == 16)
				ft_strdel(&str);
			else if (ft_strlen(str) != 16 || ft_countchr(str,'#') != 4 || ft_countchr(str,'.') != 12)
			{
				printf("INVALID\n");
				return (0);
			}
			else
			{
				i = ft_check2(str);
				data[q] = i;
				q++;
				ft_strdel(&str);
			}
		}
		ft_strdel(&mass);
		ft_strdel(&line1);
	}
	if (str != NULL && ft_strlen(str) == 16)
	{
		if (ft_strlen(str) == 16 && ft_countchr(str,'.') == 16)
			ft_strdel(&str);
		else if (ft_strlen(str) != 16 || ft_countchr(str,'#') != 4 
			|| ft_countchr(str,'.') != 12)
			{
				printf("INVALID\n");
				return (0);
			}
			else
			{
				i = ft_check2(str);
				if (i == 0)
					return(0);
				/* data[q] = i; */
				q++;
				ft_strdel(&str);
			}
	}
	else
	{
		printf("INVALID\n");
		return(0);
	}
	ft_strdel(&str);
	if (data[0] != 0)
		ft_fillit0(data,j);
	else
		printf("INVALID\n");
	free(data);
	return(0);
}
