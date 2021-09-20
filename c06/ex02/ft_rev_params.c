/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:41:47 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/09 12:17:56 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < --argc)
	{
		j = 0;
		while (argv[argc][j])
		{
			j++;
		}
		write (1, argv[argc], j);
		write (1, "\n", 1);
	}
}
