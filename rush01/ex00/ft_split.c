/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgreenbl <bgreenbl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 23:07:25 by bgreenbl          #+#    #+#             */
/*   Updated: 2021/09/12 19:01:09 by bgreenbl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_find(char *str, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (*str == base[i])
			return (1);
	return (0);
}

char	*ft_size(char *p, char *charset)
{
	int		counter;
	char	*temp_p;
	int		i;
	char	*res;

	i = 0;
	temp_p = p;
	counter = 0;
	while (!ft_find(temp_p, charset) && *temp_p != 0)
	{
		temp_p++;
		counter++;
	}
	counter++;
	res = (char *)malloc(counter * sizeof(char));
	if (res == NULL)
		return (NULL);
	temp_p = p;
	while (i < counter - 1)
	{
		res[i] = temp_p[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		counter;
	char	**temp;
	char	**p_arr;
	int		i;

	i = -1;
	counter = 0;
	while (str[++i])
	{
		if (!ft_find(&str[i], charset) && i == 0)
			counter ++;
		else if (!ft_find(&str[i], charset) && ft_find(&str[i - 1], charset))
			counter++;
	}
	p_arr = (char **)malloc((counter + 2) * sizeof(char *));
	if (p_arr == NULL)
		return (NULL);
	temp = p_arr++;
	i = -1;
	while (str[++i])
		if (!ft_find(&str[i], charset))
			if (i == 0 || ft_find(&str[i - 1], charset))
				*p_arr++ = ft_size(&str[i], charset);
	*p_arr = NULL;
	return (temp);
}
