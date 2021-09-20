/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 11:12:08 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/04 19:16:42 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int	n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != 0)
	{
		*dest++ = *src++;
		i++;
	}
	return (dest);
}
