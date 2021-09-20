/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 20:53:13 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/14 23:01:29 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_fill_cat(int ac, char **av)
{
	int	i;
	int	fd;

	i = 0;
	while (++i < ac)
	{
		if (av[i][0] == '-')
		{
			ft_print_cat(0);
		}
		else
		{
			fd = open (av[i], O_RDONLY);
			if (fd == -1)
			{
				ft_print_error("cat: ");
				ft_print_error(av[i]);
				ft_print_error(": No such file or directory.\n");
			}
			ft_print_cat(fd);
			close(fd);
		}
	}
}
