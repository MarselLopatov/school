/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 20:30:29 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/04 21:08:16 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	index;
	int	len;

	len = 0;
	index = 0;
	while (index < size)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	while (src[len] != 0)
	{
		len++;
	}
	return (index + len);
}
