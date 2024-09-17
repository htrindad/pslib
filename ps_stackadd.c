/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stackadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:44:09 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/17 11:51:20 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

void	ps_stackadd(t_stack **stack, int nbr)
{
	t_stack	*tmp;

	tmp = malloc(sizeof(t_stack));
	if (tmp == NULL)
	{
		ps_stackfree(stack);
		ps_error();
	}
	tmp->val = nbr;
	if (stack == NULL)
		*stack = tmp;
	else
	{
		while (stack->next)
			stack = stack->next;
		tmp->prev = *stack;
		*stack->next = tmp;
		while (stack->prev)
			stack = stack->prev;
	}
}
