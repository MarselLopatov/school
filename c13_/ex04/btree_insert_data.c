/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:46:01 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/17 23:32:35 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root,
	void *item, int (*cmpf)(void *, void *))
{
	if (!*root)
		*root = btree_create_node(item);
	else if (cmpf((*root)->left, item) > 0)
	{
		btree_insert_data(&(*root)->left, item, cmpf);
	}
	else
		btree_insert_data(&(*root)->right, item, cmpf);
}
