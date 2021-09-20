/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 19:55:09 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/07 23:36:09 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] == 127)
			return (0);
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	make_base(int nb, char *base, int len)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		make_base(-nb, base, len);
	}
	else if (nb > len - 1)
	{
		make_base(nb / len, base, len);
		make_base(nb % len, base, len);
	}
	else
	{
		c = base[nb];
		ft_putchar(c);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (nbr == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}	
	if (check_base(base) == 0)
		return ;
	while (base[i])
		i++;
	make_base(nbr, base, i);
}
