/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pslib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:32:42 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/05 19:00:15 by htrindad         ###   ########.fr       */
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
size_t	ps_strlen(char const *s);
char	*ps_substr(char const *s);
char	*ps_substr(char const *s, unsigned int start, unsigned int end);

#endif
