/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdo-carm <mdo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:36:15 by mdo-carm          #+#    #+#             */
/*   Updated: 2023/06/13 17:57:30 by mdo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*x;
	char	*y;
	int		i;

	if (!dst && !src)
		return (NULL);
	x = (char *)dst;
	y = (char *)src;
	i = len - 1;
	if (y < x)
	{
		while (i >= 0)
		{
			x[i] = y[i];
			i--;
		}
		return (dst);
	}
	while (len--)
		*x++ = *y++;
	return (dst);
}
