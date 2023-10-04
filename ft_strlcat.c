/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artclave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:28:36 by artclave          #+#    #+#             */
/*   Updated: 2023/10/04 23:45:42 by artclave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	i;
	size_t	j;

	d = ft_strlen(dst);
	j = d;
	if (dstsize <= d)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && j + 1 < dstsize)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (d + ft_strlen(src));
}
