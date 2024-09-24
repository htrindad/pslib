/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_getlowest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:39:31 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/24 16:47:52 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

int	ps_getlowest(t_stack *node)
{
	int	val;

	val = node->val;
	while (node)
	{
		if (node->val < val)
			val = node->val;
		node = node->next;
	}
	return (val);
}
