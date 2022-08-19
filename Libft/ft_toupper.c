/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdo-carm <mdo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:50:26 by mdo-carm          #+#    #+#             */
/*   Updated: 2021/10/28 19:34:40 by mdo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	char	x;
	char	y;

	x = 'a';
	y = 'a';
	printf("\nCharacter Input: %c\n", x);
	printf("\nOriginal function: %c", toupper(x));
	printf("\nMy function______: %c\n", ft_toupper(y));
}
*/