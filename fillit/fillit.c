
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:03:11 by nglynis           #+#    #+#             */
/*   Updated: 2019/11/27 12:59:06 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t		ft_countchr(const char *s, int c)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (char)c)
			j++;
		i++;
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
	printf("k : %zu\n",k);
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
int		main(int argc, char **argv)
{
	int fd;
	char *line1;
	/* char *line2; */
	char *str;
	char *mass;
	int		i;
	int		k;
	int		j;
	char	*sol;
	char	*eol;
	char	*nol1;
	char	*nol2;
	char	*nol3;
	char	*nol4;
	int		a;
	int		b;
	int		c;
	int		d;

	char *I1[321]= {"#...#...#...#", "####", "#...#...##", "#.###", "##...#...#",
		"###.#", "#...#..##", "###...#", "##..#...#", "#..###", "#..##", 
		"#..##...#", "###..#","#...##..#", "##...##", "#..##..#", 
		"##.##", "#...##...#", "##..##"};

	k = 0;
	i = 0;
	j = 0;
	mass = NULL;
	if (argc < 2)
	{
		printf("Usage %s <filename>\n",argv[0]);
		return(0);
	}
	fd = open(argv[1],O_RDONLY);
	while (get_next_line(fd,&line1) > 0)
	{
		if (ft_strlen(line1) != 4)
		{
			printf("INVALID\n");
			return (0);
		}
		mass = str;
		str = !(str) ? ft_strdup(line1) : ft_strjoin(str, line1);
		k = ft_countchr(str,'#');
		ft_strdel(&mass);
	}
	if (ft_strlen(str) != 16 || ft_countchr(str,'#') != 4 || ft_countchr(str,'.') != 12)
	{
		printf("INVALID\n");
		return (0);
	}
	sol = ft_strchr(str,'#');
	eol = ft_strrchr(str,'#');
	nol1 = ft_numbchr(str,'#',1);
	nol2 = ft_numbchr(str,'#',2);
	nol3 = ft_numbchr(str,'#',3);
	nol4 = ft_numbchr(str,'#',4);
	/* printf("dew : %s\n",nol2); */
	printf("a = %d\n",ft_check1(str,nol1 - str));
	printf("b = %d\n",ft_check1(str,nol2 - str));
	printf("c = %d\n",ft_check1(str,nol3 - str));
	printf("d = %d\n",ft_check1(str,nol4 - str));
	a = ft_check1(str,nol1 - str);
	b = ft_check1(str,nol2 - str);
	c = ft_check1(str,nol3 - str);
	d = ft_check1(str,nol4 - str);
	if ((a == 0 || b == 0 || c == 0 || d == 0) || (b < 2 && c < 2))
	{
		printf("!!!!!!!!!!!!!!!!!!!!\n");
		printf("INVALID");
		return (0);
	}
	/* printf("nol : %ld\n",nol - str); */
	mass = str;
	str = ft_strsub(str,sol - str , eol - sol + 1);
	printf("work : %s\n",ft_numbchr(mass,'#', 3));
	/* printf("mass : %s\n",mass); */
	ft_strdel(&mass);
	while ((i = ft_strcmp(I1[j],str)) != 0)
	{
		j++;
		i = ft_strcmp(I1[j],str);
	}
	/* printf("i = %d\n",i); */
	/* printf("j = %d\n",j); */
	printf("str: %s\n",str);
	/* //printf("eol: %s\n",eol); */
	/* line2 = ft_strsub(str, 0, eol - sol); */
	/* printf("line2: %s\n",line2); */
	return(0);
}
