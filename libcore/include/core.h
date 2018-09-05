/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wseegers <wseegers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 14:29:36 by kmarchan          #+#    #+#             */
/*   Updated: 2018/09/04 23:32:52 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_H
# define CORE_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

# include "f_string.h"
# include "f_memory.h"
# include "f_math.h"
# include "f_io.h"
# include "s_vector.h"
# include "f_print.h"

int						f_isspace_notnewl(char c);
int						f_big_to_little_endian(char big[4]);
void					f_little_to_big_endian(int little, char big[4]);
long					f_atol(char *nbr, int *error);
char					*f_dynamicstring(char **ori, char *add);

#endif
