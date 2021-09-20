/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 22:28:44 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/17 23:32:42 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	i;
	int	j;

	if (root)
	{
		i = btree_level_count(root->left);
		j = btree_level_count(root->right);
		if (i > j)
			return (i + 1);
		else
			return (j + 1);
	}
	return (0);
}
