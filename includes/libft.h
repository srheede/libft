/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 06:08:35 by srheede           #+#    #+#             */
/*   Updated: 2018/05/22 06:31:10 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int     ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int		ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_islower(int c);
int     ft_isprint(int c);
int		ft_isspace(int c);
int     ft_isupper(int c);
char    *ft_itoa(int n);
void    *ft_memalloc(size_t size);
void    *ft_memchr(void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
void    ft_memdel(void **ap);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *b, int c, size_t len);
void    ft_putchar(char c);
void    ft_putstr(char *str);
char    *ft_strcat(char *s1, const char *s2);
void    ft_strclr(char *s);
char    *ft_strchr(const char *s, int c);
int     ft_strcmp(char *s1, char *s2);
char    *ft_strcpy(char *dest, const char *src);
void    ft_strdel(char **as);
char    *ft_strdup(char *src);
int     ft_strequ(char const *s1, char const *s2);
char    *ft_strjoin(char const *s1, char const *s2);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char    *ft_strncat(char *s1, const char *s2, size_t n);
int     ft_strnequ(char const *s1, char const *s2, size_t n);
char    *ft_strnew(size_t size);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(const char *s, int c);
char    *ft_strstr(const char *haystack, const char *needle);
int     ft_tolower(int c);
int     ft_toupper(int c);
#endif
