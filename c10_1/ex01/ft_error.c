/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 23:20:08 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/14 23:01:29 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_error(char *ch)
{
	int	i;

	i = -1;
	while (ch[++i])
	{
		write (2, &ch[i], 1);
	}
}
