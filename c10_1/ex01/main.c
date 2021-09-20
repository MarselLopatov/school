/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:38:40 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/14 23:01:53 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 2 || argv[1][0] == '-')
	{
		ft_print_cat(0);
	}
	ft_fill_cat(argc, argv);
}
