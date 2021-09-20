/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 22:27:08 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/03 23:37:15 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i > size)
	{
		while (j > i)
		{
			if (tab[j] > tab[j - 1])
			{
				temp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = tab[j];
			}
			j--;
		}
		i++;
	}
}
