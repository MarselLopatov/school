/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 21:38:50 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/16 23:27:26 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 1;
	if (!nbr)
		return ((void *) 0);
	while (i < nbr)
	{
		if (begin_list->next)
			begin_list = begin_list->next;
		else
			return ((void *) 0);
		i++;
	}
	return (begin_list);
}
