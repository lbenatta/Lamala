/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:47:38 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/26 16:22:46 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include<stdlib.h>

int     ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t n, size_t size);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dst, const void *scr, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *ptr, int c, size_t len);
char    *ft_strchr(const char *str, int c);
char    *ft_strdup(const char *str);
char    *ft_strjoin(const char *s1, const char *s2);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlen(const char *str);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *str, const char *to_find, size_t n);
char    *ft_strrchr(const char *str, int c);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int     ft_tolower(int c);
int     ft_toupper(int c);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);

#endif
