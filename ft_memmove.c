/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artclave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:08:06 by artclave          #+#    #+#             */
/*   Updated: 2023/10/04 23:44:42 by artclave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_append_src(unsigned char *d, unsigned char *s, int n)
{
	n -= 1;
	while (n >= 0)
	{
		d[n] = s[n];
		n--;
	}
	return (d);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	int				n;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (d == s)
		return (d);
	n = (int)len;
	i = 0;
	if (d > s)
		return (ft_append_src(d, s, n));
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
