/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_xor.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wseegers <wseegers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:42:10 by wseegers          #+#    #+#             */
/*   Updated: 2018/09/11 10:43:14 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op_function.h"

void	op_xor(struct s_process *bot)
{
	int		*args;

	args = bot->args;
	args[0] = (bot->is_reg[0]) ? bot->reg[args[0]] : args[0];
	args[1] = (bot->is_reg[1]) ? bot->reg[args[1]] : args[1];
	bot->reg[args[2]] = args[0] ^ args[1];
	bot->carry = !(bot->reg[args[2]]);
	f_printf("op: xor\n");
}
