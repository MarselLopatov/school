/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:29:45 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/04 23:44:47 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		while (str[i] == ' ')
		{
			i++;
		}
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i += 2;
		}
		if ((str[i - 1] < 'a' || str[i - 1] > 'z')
			&& !(str[i - 1] >= '0' && str[i - 1] <= '9'))
		{
			str[i] -= 32;
			i++;
		}
		i++;
	}
	return (str);
}

int main()
{
	char ch[] = "dasfgas 43fas ";
	ft_strcapitalize(ch);
	printf("%s", ch);
}
