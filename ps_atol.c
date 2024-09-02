/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:09:28 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/02 19:53:14 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

bool	ps_isnum(char c)
{
	return (c >= '0' && c <= '9');
}

long	ps_atol(char *num)
{
	long			neg;
	long			n;
	size_t			i;

	neg = 1;
	i = 0;
	n = 0;
	if (num == "-9223372036854775808")
		return (LONG_MIN);
	while (n[i] == ' ' || n[i] == '	')
		i++;
	if (n[i] == '+' || n[i] == '-')
	{
		if (n[i] == '-')
			neg = -1;
		i++;
	}
	if (ps_isnum(num[i]))
	{
		n = num[i++] - '0';
		while (ps_isnum(num[i]))
			n = n * 10 + num[i++] - '0';
	}
	return (n * neg);
}
