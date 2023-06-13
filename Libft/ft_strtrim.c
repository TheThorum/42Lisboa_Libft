/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdo-carm <mdo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:26:24 by mdo-carm          #+#    #+#             */
/*   Updated: 2023/06/13 17:58:44 by mdo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		first_i;
	int		last_i;

	first_i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[first_i] && ft_strchr(set, s1[first_i]))
		first_i++;
	last_i = ft_strlen(s1);
	while (last_i > 0 && ft_strchr(set, s1[last_i]))
		last_i--;
	return (ft_substr(s1, first_i, last_i - first_i + 1));
}
