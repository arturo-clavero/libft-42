/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artclave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:34:50 by artclave          #+#    #+#             */
/*   Updated: 2023/10/04 23:33:52 by artclave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*trim_str(char const *str, int start, int end)
{
	char	*ptr;
	int		i;
	int		len;

	i = start;
	len = 0;
	while (i < end)
	{
		i++;
		len++;
	}
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len && str[start])
	{
		ptr[i] = str[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	start_index(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

int	end_index(char const *s1, char const *set)
{
	int	i;
	int	j;

	if (ft_strlen(s1) < 1)
		return (0);
	i = ft_strlen(s1) -1;
	j = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = start_index(s1, set);
	end = end_index(s1, set);
	result = trim_str(s1, start, end);
	return (result);
}
