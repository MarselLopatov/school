/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 11:51:17 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/06 11:08:25 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int main()
{
	char s1[] ="qwerqwer";
	char s2[] ="qwer";
	printf("%d", ft_strncmp(s1, s2, 1));
}