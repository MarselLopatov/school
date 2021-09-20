/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 19:27:20 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/10 23:23:24 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*str;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	str = malloc (sizeof(*str) * (max - min));
	if (str == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	*range = str;
	return (max - min);
}
int main()
{
	return 0;
}