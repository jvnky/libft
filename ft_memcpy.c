/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:28:33 by ychair            #+#    #+#             */
/*   Updated: 2019/11/05 15:28:38 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*ptr;
	char			*ptr1;
	unsigned int	i;

	i = 0;
	ptr = dst;
	if (!dst && !src)
		return (NULL);
	if (n == 0)
		return (dst);
	ptr1 = (char *)src;
	while (i < n)
	{
		ptr[i] = ptr1[i];
		i++;
	}
	return (ptr);
}
