/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artclave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:26:26 by artclave          #+#    #+#             */
/*   Updated: 2023/10/04 23:47:22 by artclave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	int				size;
	unsigned char	*str;
	unsigned char	a;

	str = (unsigned char *)s;
	a = (unsigned char)c;
	i = 0;
	size = (int)n;
	while (size > 0)
	{
		if (str[i] == a)
			return ((void *)&str[i]);
		i++;
		size--;
	}
	return ((void *)0);
}
