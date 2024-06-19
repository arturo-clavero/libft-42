/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artclave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:44:15 by artclave          #+#    #+#             */
/*   Updated: 2023/10/04 23:16:14 by artclave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*buffer;

	if (lst == NULL)
		return (NULL);
	buffer = lst;
	while (buffer->next != NULL)
		buffer = buffer->next;
	return (buffer);
}
