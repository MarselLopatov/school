/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 17:47:39 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/05 20:44:48 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	int				i;
	int				j;

	i = 0;
	j = 0;
	while (src[len])
		len++;
	while (dest[i])
	{
		len++;
		i++;
	}
	while (src[j] && j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (len);
}
