/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:17:32 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/10 23:24:15 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
	{
		i++;
	}
	len = len + i * (size - 1) + 1;
	return (len);
}

void	sort_str(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	while (i++ < size + 1)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[k++] = strs[i][j++];
		if (i == size - 1)
			break ;
		j = 0;
		while (sep[j] != '\0')
			str[k++] = sep[j++];
	}
	str[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*str;

	if (size <= 0)
	{
		str = NULL;
		return (str);
	}
	len = check_len(size, strs, sep);
	str = malloc (sizeof(*str) * (len));
	if (str == NULL)
		return (NULL);
	sort_str(size, strs, sep, str);
	return (str);
}
