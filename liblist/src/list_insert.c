/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_insert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 13:02:13 by wseegers          #+#    #+#             */
/*   Updated: 2018/08/29 09:54:12 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_insert(t_list *list, void *data, int i)
{
	t_list_node	*node;
	t_list_node	*new;

	if (!list->size || i == -1)
	{
		list_append(list, data);
		return ;
	}
	if (!(node = list_getnode(list, i)))
		return ;
	new = list_node_create(node->prev, node, data);
	if (node->prev)
		node->prev->next = new;
	else
		list->head = new;
	node->prev = new;
	list->size++;
}
