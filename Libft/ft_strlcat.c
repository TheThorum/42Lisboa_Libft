/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdo-carm <mdo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:23:29 by mdo-carm          #+#    #+#             */
/*   Updated: 2023/06/13 17:58:21 by mdo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	a;
	unsigned int	b;

	a = ft_strlen(dest);
	y = ft_strlen(src);
	x = a;
	b = 0;
	if (size > a)
	{
		while (src[b] != '\0' && x < size - 1)
		{
			dest[x] = src[b];
			x++;
			b++;
		}
		dest[x] = '\0';
		return (a + y);
	}
	return (y + size);
}
