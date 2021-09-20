/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 21:55:27 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/03 22:25:46 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	temp;

	counter = 0;
	while (counter < size)
	{
		size--;
		temp = tab[counter];
		tab[counter] = tab[size];
		tab[size] = temp;
		counter++;
	}
}
