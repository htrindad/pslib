/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:41:16 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/17 11:10:26 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

void	*ps_stacknew(t_stack **stack, int val)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	new->val = val;
	if (stack == NULL)
		stack = new;
	else
		*stack->next = new;
	return (new);
}
