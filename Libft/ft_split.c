/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdo-carm <mdo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:23:57 by mdo-carm          #+#    #+#             */
/*   Updated: 2023/06/13 17:58:00 by mdo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	stringcount(char const *s, char c)
{
	int	i;
	int	x;
	int	nbr_string;

	i = 0;
	nbr_string = 0;
	if (s[i] == c)
		x = 0;
	else
		x = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			x = 1;
		if (s[i] != c && x == 1)
		{
			x = 0;
			nbr_string++;
		}
		i++;
	}
	return (nbr_string);
}

static int	charcount(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char		**split_str;
	int			x;
	int			nbr_string;
	int			nbr_char_len;

	if (!s)
		return (NULL);
	nbr_string = stringcount(s, c);
	split_str = (char **)ft_calloc((nbr_string + 1), sizeof(char *));
	if (!split_str)
		return (NULL);
	x = 0;
	while (x < nbr_string && s)
	{
		while (*s == c)
			s++;
		nbr_char_len = charcount(s, c);
		split_str[x] = ft_substr(s, 0, nbr_char_len);
		s = s + nbr_char_len;
		x++;
	}
	return (split_str);
}
