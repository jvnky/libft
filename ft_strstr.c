/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:52:41 by ychair            #+#    #+#             */
/*   Updated: 2019/11/05 13:52:46 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_found(const char *str, int i, int j, const char *to_find)
{
	while (to_find[j])
	{
		if (!(str[i + j] == to_find[j]))
			return (0);
		j++;
	}
	return (1);
}

char			*ft_strstr(const char *str, const char *to_find)
{
	int	pos;
	int	i;
	int	found;

	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	if (ft_strlen(str) == 0)
		return (0);
	pos = 0;
	while (str[pos])
	{
		if (str[pos] == to_find[0])
		{
			i = 0;
			found = ft_found(str, pos, i, to_find);
			if (found == 1)
				return ((char *)&str[pos]);
		}
		pos++;
	}
	return (0);
}
