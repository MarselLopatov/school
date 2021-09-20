/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 19:43:40 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/17 23:32:23 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*ob;

	ob = (t_btree *)malloc(sizeof(t_btree));
	if (!ob)
		return (0);
	ob->item = item;
	ob->left = (void *) 0;
	ob->right = (void *) 0;
	return (ob);
}
