/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:01:15 by akazuki           #+#    #+#             */
/*   Updated: 2023/04/29 18:07:52 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *stack)
{
	operation_s(stack);
	write (1, "sa\n", 3);
}

void	sb(t_list *stack)
{
	operation_s(stack);
	write(1, "sb\n", 3);
}

void	ss(t_list *astack, t_list *bstack)
{
	operation_s(astack);
	operation_s(bstack);
	write(1, "ss\n", 3);
}
