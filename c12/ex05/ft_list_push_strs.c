/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:58:51 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/16 23:21:55 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*temp;
	t_list	*begin;

	temp = (void *) 0;
	begin = temp;
	i = -1;
	while (++i < size)
	{
		temp = ft_create_elem(strs[i]);
		temp->next = begin;
		begin = temp;
	}
	return (temp);
}
