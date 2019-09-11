/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:40:05 by nglynis           #+#    #+#             */
/*   Updated: 2019/09/12 01:41:57 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

void	*ft_memset(void *dest, int c, size_t n);
void	ft_bzero(void *str, size_t n);
int		 *ft_memcpy(void *dest, const void *src, size_t n);
void   *ft_memmove(void *dst, const void *src, size_t n);
void   *ft_memchr(void *s1, int c, size_t n);
int   ft_memcmp(const void *s1, const void *s2, int n);
int   ft_strlen(char *str);
char   *ft_strdup(char *src);
int   ft_atoi(char *str);
char   *ft_strcat(char *dest, char *src);
char   *ft_strncat(char *dest, char *src, int nb);
int   ft_strcmp(char *s1, char *s2);
char   *ft_strcpy(char *dst, const char *src);
char   *ft_strncpy(char *dst, const char *src, size_t len);
char   *ft_strncpy(char *dst, const char *src, size_t len);
void   *ft_memccpy(void *dst, const void *src, int c, size_t n);
#endif
