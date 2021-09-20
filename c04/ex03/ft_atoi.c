/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:47:01 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/08 15:04:05 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	check_minus(char *str)
{
	int	count_minus;
	int	i;

	i = 0;
	count_minus = 0;
	while (str[i] && str[i] != '-' && str[i] != '+')
		i++;
	while (str[i] && (str[i] < '0' || str[i] > '9'))
	{
		if (str[i] == '-')
		{
			count_minus++;
		}
		if (str[i] == ' ')
			return (0);
		if (str[i] != '+' && str[i] != '-' && str[i] != '\t'
			&& str[i] != '\n' && str[i] != '\v'
			&& str[i] != '\f' && str[i] != '\r')
			return (0);
		i++;
	}
	if (count_minus % 2 == 0)
		return (1);
	return (-1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	integer;
	int	check;

	integer = 0;
	i = 0;
	if (!str[i])
		return (0);
	check = check_minus(str);
	while (str[i] && (str[i] < '0' || str[i] > '9'))
	{
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		integer = integer * 10 + str[i] - 48;
		i++;
	}
	return (integer * check);
}

int main()
{
	printf("%d", ft_atoi("-0"));
}