/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 22:22:19 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/17 23:32:39 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		 int (*cmpf)(void *, void *))
{
	void	*data;

	if (root)
	{
		if (root->left)
			data = btree_search_item(root, data_ref, cmpf);
		if (cmpf(root->item, data_ref) == 0 && data == 0)
			return (root->item);
		if (root->right && !data)
			btree_search_item(root, data_ref, cmpf);
	}
	return ((void *)0);
}
