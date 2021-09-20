/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 21:43:29 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/16 23:32:12 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*next1;
	t_list	*next2;
	t_list	*current;

	current = *begin_list;
	if (!current || !current->next)
		return ;
	next1 = current->next;
	next2 = current->next->next;
	current->next = (void *) 0;
	while (next2)
	{
		next1->next = current;
		current = next1;
		next1 = next2;
		next2 = next2->next;
	}
	*begin_list = next2;
}
