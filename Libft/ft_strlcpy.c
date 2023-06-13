/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdo-carm <mdo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:23:18 by mdo-carm          #+#    #+#             */
/*   Updated: 2023/06/13 17:58:27 by mdo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		if (size == 0)
			return (ft_strlen(src));
		if (i < size - 1 && size > 0)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	if (src[i] == '\0')
		dest[i] = '\0';
	return (ft_strlen(src));
}
