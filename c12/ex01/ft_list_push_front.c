/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:46:16 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/16 23:20:33 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*ob;

	if (*begin_list == (void *) 0)
		*begin_list = ft_create_elem(data);
	else
	{
		ob = ft_create_elem(data);
		ob->next = *begin_list;
		*begin_list = ob;
	}
}
