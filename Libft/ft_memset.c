/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdo-carm <mdo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:51:24 by mdo-carm          #+#    #+#             */
/*   Updated: 2023/06/13 17:57:34 by mdo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	x;
	unsigned char	*p;

	p = (unsigned char *)b;
	x = (unsigned char)c;
	i = 0;
	while (i < (int)len)
	{
		p[i] = x;
		i++;
	}
	return (b);
}
