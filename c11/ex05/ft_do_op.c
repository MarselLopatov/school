/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:21:55 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/15 16:46:20 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_do_op(int ac, char **av)
{
	if (*av[2] == '/' && *av[3] == '0')
	{
		ft_putstr("Stop : division by zero\n");
		return ;
	}
	if (*av[2] == '%' && *av[3] == '0')
	{
		ft_putstr("Stop : modulo by zero\n");
		return ;
	}
	ft_putnbr(ft_calc(ac, av));
}
