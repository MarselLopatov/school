/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 19:56:11 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/08 23:37:02 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_prime(int n)
{
	int	i;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 1) == 0)
			return (0);
		i += 6;
	}	
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	j;

	j = 0;
	if (nb <= 1)
		return (2);
	while (!j)
	{
		if (check_prime(nb))
			j = 1;
		else
			nb++;
	}
	return (nb);
}
