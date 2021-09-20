/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:10:11 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/15 16:46:18 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_calc(int ac, char **av)
{
	int	num1;
	int	num2;
	int	result;
	int	(*f[4])(int, int);

	f[0] = ft_do_plus;
	f[1] = ft_do_minus;
	f[2] = ft_do_division;
	f[3] = ft_do_multiplication;
	result = 0;
	num1 = ft_atoi(av[1]);
	num2 = ft_atoi(av[3]);
	if (*av[2] == '+')
		result = f[0](num1, num2);
	else if (*av[2] == '-')
		result = f[1](num1, num2);
	else if (*av[2] == '*')
		result = f[3](num1, num2);
	else if (*av[2] == '/')
		result = f[2](num1, num2);
	return (result);
}
