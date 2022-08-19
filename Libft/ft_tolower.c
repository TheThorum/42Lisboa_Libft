/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdo-carm <mdo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:16:05 by mdo-carm          #+#    #+#             */
/*   Updated: 2021/10/28 19:34:49 by mdo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int	main(void)
{
	char	x;
	char	y;

	x = 'A';
	y = 'A';
	printf("\nCharacter Input: %c\n", x);
	printf("\nOriginal function: %c", tolower(x));
	printf("\nMy function______: %c\n", ft_tolower(y));
}
*/