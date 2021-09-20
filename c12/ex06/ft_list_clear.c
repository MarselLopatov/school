/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 21:29:06 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/16 23:25:05 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*ob;
	t_list	*list;

	list = begin_list;
	while (list)
	{
		ob = list->next;
		if (list->data)
			free_fct(list->data);
		free (list);
		list = ob;
	}
	begin_list = (void *) 0;
}
