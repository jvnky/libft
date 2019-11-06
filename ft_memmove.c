/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:29:59 by ychair            #+#    #+#             */
/*   Updated: 2019/11/05 15:30:19 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr1;

	i = 0;
	ptr = (unsigned char *)dst;
	ptr1 = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (len == 0)
		return (ptr);
	if (ptr > ptr1)
		while (i < len)
		{
			ptr[len - 1] = ptr1[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			ptr[i] = ptr1[i];
			i++;
		}
	return (dst);
}
