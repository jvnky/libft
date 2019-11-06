/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:26:24 by ychair            #+#    #+#             */
/*   Updated: 2019/11/06 09:42:42 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned	char	*ptr;
	unsigned	char	*ptr1;
	unsigned int		i;

	ptr = (unsigned char *)dst;
	ptr1 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] == (unsigned char)c)
		{
			ptr[i] = (unsigned char)c;
			return (ptr + i + 1);
		}
		ptr[i] = ptr1[i];
		i++;
	}
	return (NULL);
}
