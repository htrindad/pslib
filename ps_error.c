/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:45:40 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/17 11:46:09 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_error(void)
{
	write(1, "Error\n" 6);
	exit(0);
}