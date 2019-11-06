/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:49:38 by ychair            #+#    #+#             */
/*   Updated: 2019/11/06 11:41:39 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int			ft_atoi(const char *str);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isalpha(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_strlen(const char *str);
char		*ft_strchr(const char *s, int c);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
char		*ft_strnstr(const char *s1, const char *s2, size_t len);
char		*ft_strrchr(const char *s, int c);
int			ft_toupper(int c);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
char		*ft_strdup(const char *s1);
char		*ft_strstr(const char *haystack, const char *needle);
void		*ft_calloc(size_t count, size_t size);
char		*ft_substr(const char *s, unsigned int start, size_t len);
char		*ft_strjoin(const char *s1, const char *s2);
char		*ft_itoa(int n);
char		*ft_strtrim(const char *s1, const char *set);
char		**ft_split(const char *s, char c);
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

#endif
