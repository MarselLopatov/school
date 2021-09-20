/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:29:30 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/08 23:20:04 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0 && nb < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 0 && nb == 0)
		return (1);
	if (nb == -1)
	{
		if (power % 2 == 0)
			return (1);
		else
			return (-1);
	}
	if (power != 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}
