/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:57:07 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/08 22:35:05 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 1;
	i = 1;
	if (nb <= 0)
		return (0);
	if (nb < 2)
		return (1);
	while (i < nb + 1)
	{
		result *= i;
		i++;
	}
	return (result);
}
