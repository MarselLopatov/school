/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:07:54 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/15 16:46:24 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
		ft_do_op(argc, argv);
	else if (argc == 1)
		return (0);
	else
		write(1, "0", 1);
	return (0);
}
