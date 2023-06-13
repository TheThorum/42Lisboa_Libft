/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdo-carm <mdo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:56:38 by mdo-carm          #+#    #+#             */
/*   Updated: 2023/06/13 17:57:24 by mdo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*x;
	unsigned char	*y;

	if (!dst && !src)
		return (NULL);
	if (n == 0)
		return (dst);
	x = (unsigned char *)dst;
	y = (unsigned char *)src;
	i = 0;
	while (i < (int)n)
	{
		x[i] = y[i];
		i++;
	}
	return (dst);
}
