/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/18 16:25:00 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/18 17:14:31 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*index;

	index = 0;
	index = malloc(sizeof(t_btree));
	if (index)
	{
		index->item = item;
		index->left = 0;
		index->right = 0;
	}
	return (index);
}
