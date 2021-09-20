/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 21:28:05 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/16 23:17:41 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*ob;

	if (!*begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	ob = *begin_list;
	while (ob->next)
	{
		ob = ob->next;
	}
	ob->next = ft_create_elem(data);
}
