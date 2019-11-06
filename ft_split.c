/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:47:32 by ychair            #+#    #+#             */
/*   Updated: 2019/11/06 16:59:38 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		**ft_free(char **tab, int i)
{
	while (--i)
	{
		free(tab[i]);
		tab[i] = 0;
	}
	free(tab);
	tab = 0;
	return (0);
}

static	int		nb_word(char *s, char c)
{
	int	line;

	line = 0;
	while (s && *s && *s == c)
		s++;
	if (s && *s && *s != c)
		line++;
	while (s && *s && *s != c)
		s++;
	if (s && *s && *s == c)
		line += nb_word(s, c);
	return (line);
}

static	int		nb_char(char *s, char c)
{
	int	nbr_char;

	nbr_char = 0;
	while (s && s[nbr_char] && s[nbr_char] != c)
		nbr_char++;
	return (nbr_char);
}

char			**ft_split(char *s, char c)
{
	int		nb_w;
	int		i;
	int		j;
	char	**tab;

	i = -1;
	nb_w = nb_word(s, c);
	if (!s || !(tab = malloc(sizeof(char *) * (nb_w + 1))))
		return (0);
	while (++i < nb_w)
	{
		while (*s == c)
			s++;
		if (!(tab[i] = malloc(sizeof(char) * (nb_char(s, c) + 1))))
			return (ft_free(tab, i));
		j = 0;
		while (*s && *s != c)
		{
			tab[i][j++] = *s;
			s++;
		}
		tab[i][j] = '\0';
	}
	tab[i] = 0;
	return (tab);
}
