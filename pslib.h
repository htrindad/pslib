/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pslib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:32:42 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/02 19:52:43 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSLIB_H
# define PSLIB_H

# include <stdlib.h>
# include <stdbool.h>
# include <string.h>

typedef struct s_stack
{
	long			val;
	struct s_stack	*prev;
	struct s_track	*next;
}	t_stack;

char	**ps_split(char *str, char sep);
long	ps_atol(char *num);
t_track	*ps_stacknew(long val);

#endif
