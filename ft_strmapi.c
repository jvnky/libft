/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:51:22 by ychair            #+#    #+#             */
/*   Updated: 2019/11/05 13:51:28 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int n, char c))
{
	char	*str;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (*s)
	{
		str[i] = f(i, *s);
		s++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
