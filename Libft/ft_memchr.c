/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdo-carm <mdo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:20:53 by mdo-carm          #+#    #+#             */
/*   Updated: 2023/06/13 17:57:16 by mdo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			x;
	char			*y;
	unsigned int	i;

	if (n == 0)
		return (NULL);
	y = (char *) s;
	x = c;
	i = 0;
	while (y[i] != x && i < n - 1)
		i++;
	if (y[i] == x)
		return (&y[i]);
	return (NULL);
}
