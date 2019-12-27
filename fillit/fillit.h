/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:21:46 by nglynis           #+#    #+#             */
/*   Updated: 2019/12/27 08:08:29 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
#define FILLIT_H

typedef struct		i_list
{
	char				*nol1;
	char				*nol2;
	char				*nol3;
	char				*nol4;
	int					a;
	int					b;
	int					c;
	int					d;
	struct	s_list		*next;
}						x_list;

int		ft_fillit0(int	*data, int k);
int		tetra0(char *square, int k, char x);
int		tetra1(char *square, int k, char x);
int		tetra2(char *square, int k, char x);
int		tetra3(char *square, int k, char x);
int		tetra4(char *square, int k, char x);
int		tetra5(char *square, int k, char x);
int		tetra6(char *square, int k, char x);
int		tetra7(char *square, int k, char x);
int		tetra8(char *square, int k, char x);
int		tetra9(char *square, int k, char x);
int		tetra10(char *square, int k, char x);
int		tetra11(char *square, int k, char x);
int		tetra12(char *square, int k, char x);
int		tetra13(char *square, int k, char x);
int		tetra14(char *square, int k, char x);
int		tetra15(char *square, int k, char x);
int		tetra16(char *square, int k, char x);
int		tetra17(char *square, int k, char x);
int		tetra18(char *square, int k, char x);
int		alg0(char *square, int *data);
int		alg1(char *square, int *data);
int		alg2(char *square, int *data);
int		alg3(char *square, int *data);
int		alg4(char *square, int *data);
int		alg5(char *square, int *data);
int		alg6(char *square, int *data);
int		alg7(char *square, int *data);
int		alg8(char *square, int *data);
int		alg9(char *square, int *data);
int		alg10(char *square, int *data);
int		alg11(char *square, int *data);
int		alg12(char *square, int *data);
int		alg13(char *square, int *data);
int		alg14(char *square, int *data);
int		alg15(char *square, int *data);
int		alg16(char *square, int *data);
int		alg17(char *square, int *data);
int		alg18(char *square, int *data);
int		alg19(char *square, int *data);
int		alg20(char *square, int *data);
int		alg21(char *square, int *data);
int		alg22(char *square, int *data);
int		alg23(char *square, int *data);
int		alg24(char *square, int *data);
int		alg25(char *square, int *data);
int		ft_checker0(char *square, int size, char symbol, int *num);
int		ft_checker1(char *square, int size, char symbol, int *num);
int		tetra0_nrm(char *square, int k, char x, char l);
int		tetra1_nrm(char *square, int k, char x, char l);
int		tetra2_nrm(char *square, int k, char x, char l);
int		tetra3_nrm(char *square, int k, char x, char l);
int		tetra4_nrm(char *square, int k, char x, char l);
int		tetra5_nrm(char *square, int k, char x, char l);
int		tetra6_nrm(char *square, int k, char x, char l);
int		tetra7_nrm(char *square, int k, char x, char l);
int		tetra8_nrm(char *square, int k, char x, char l);
int		tetra9_nrm(char *square, int k, char x, char l);
int		tetra10_nrm(char *square, int k, char x, char l);
int		tetra11_nrm(char *square, int k, char x, char l);
int		tetra12_nrm(char *square, int k, char x, char l);
int		tetra13_nrm(char *square, int k, char x, char l);
int		tetra14_nrm(char *square, int k, char x, char l);
int		tetra15_nrm(char *square, int k, char x, char l);
int		tetra16_nrm(char *square, int k, char x, char l);
int		tetra17_nrm(char *square, int k, char x, char l);
int		tetra18_nrm(char *square, int k, char x, char l);
#include "getNextLine/get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "getNextLine/libft/libft.h"
# define FIELD_SIZE 8

#endif

