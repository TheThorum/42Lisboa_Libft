/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdo-carm <mdo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:23:36 by mdo-carm          #+#    #+#             */
/*   Updated: 2023/06/13 18:04:41 by mdo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(const char *str)
{
	if (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	nr_sign;

	i = 0;
	number = 0;
	nr_sign = 1;
	while (ft_isspace(&str[i]) == 1 && str[i] != '\0')
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			nr_sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * nr_sign);
}
