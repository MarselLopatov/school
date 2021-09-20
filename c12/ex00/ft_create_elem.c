/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:40:56 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/16 23:13:30 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*p;

	p = (t_list *)malloc (sizeof(t_list));
	if (p == NULL)
		return (NULL);
	p->data = data;
	p->next = NULL;
	return (p);
}
