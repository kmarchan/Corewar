/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 18:12:28 by wseegers          #+#    #+#             */
/*   Updated: 2018/08/29 09:51:59 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "support/include/f_memory.h"

void	list_clear(t_list *list)
{
	t_list_node	*cur;
	t_list_node	*del;

	cur = list->head;
	while (cur)
	{
		del = cur;
		cur = cur->next;
		list->f_del_data(del->data);
		del->data = NULL;
		f_memdel((void**)&del);
	}
	list->size = 0;
	list_init(list, list->f_del_data);
}
