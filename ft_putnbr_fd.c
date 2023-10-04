/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artclave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 01:49:32 by artclave          #+#    #+#             */
/*   Updated: 2023/10/04 23:27:16 by artclave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	long	num;

	if (fd < 0 || fd > 1023)
		return ;
	i = 0;
	num = (long)n;
	if (num < 0)
	{
		num *= -1;
		ft_putchar_fd('-', fd);
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	if (num < 10)
		ft_putchar_fd(num + '0', fd);
}
