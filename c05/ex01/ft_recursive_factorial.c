/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:51:12 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/08 22:36:51 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb < 2)
		return (1);
	if (nb != 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (nb);
}
