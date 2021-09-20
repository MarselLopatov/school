/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:29:23 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/15 22:57:11 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	checkleft;
	int	checkright;

	checkleft = 0;
	checkright = 0;
	i = -1;
	if (tab == (void *) 0)
		return (1);
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			checkleft++;
	}
	i = -1;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			checkright++;
	}
	if (checkleft == i || checkright == i)
		return (1);
	return (0);
}
