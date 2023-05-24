/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:43:25 by akazuki           #+#    #+#             */
/*   Updated: 2023/04/05 15:12:45 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list *stack)
{
	operation_rr(stack);
	write(1, "rra\n", 4);
}

void	rrb(t_list *stack)
{
	operation_rr(stack);
	write(1, "rrb\n", 4);
}

void	rrr(t_list *astack, t_list *bstack)
{
	operation_rr(astack);
	operation_rr(bstack);
	write(1, "rrr\n", 4);
}
