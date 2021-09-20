/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 17:00:56 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/05 20:49:06 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (str[i] != 0)
	{
		k = i;
		j = 0;
		while (str[i++] == to_find[j++])
		{
			if (to_find[j] == 0)
				return (&str[k]);
		}
		i = k + 1;
	}
	return (0);
}
