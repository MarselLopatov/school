/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 19:23:32 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/02 20:14:05 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	if (nb / 10 == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
		}
	}
	ft_putchar('0' + abs(nb % 10));
}
