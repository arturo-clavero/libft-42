/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artclave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:57:35 by artclave          #+#    #+#             */
/*   Updated: 2023/10/04 23:39:02 by artclave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	if (!s)
		return (NULL);
	if ((ft_strlen(s) + 1 - start) <= len)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s) || s == NULL)
		len = 0;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (start >= ft_strlen(s) || s == NULL)
	{
		ptr[0] = '\0';
		return (ptr);
	}
	i = 0;
	while (i < (int)len && s[start])
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
