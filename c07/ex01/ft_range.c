/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:01:44 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/10 23:22:30 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;

	if (min >= max)
	{
		str = NULL;
		return (str);
	}
	str = malloc(sizeof(*str) * (max - min));
	if (!str)
		return (NULL);
	i = 0;
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
int main()
{
	return 0;
}