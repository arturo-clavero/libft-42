/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artclave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:04:57 by artclave          #+#    #+#             */
/*   Updated: 2023/10/04 23:46:46 by artclave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	int		i;

	x = (char)c;
	i = 0;
	while (s[i])
		i++;
	i--;
	if (x == '\0')
	{
		i = 0;
		while (s[i] != '\0')
			i++;
		return ((char *)&s[i]);
	}
	while (i >= 0)
	{
		if (s[i] == x)
			return ((char *)&s[i]);
		i--;
	}
	return ((void *)0);
}
