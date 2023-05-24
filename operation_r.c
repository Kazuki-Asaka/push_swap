/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:16:37 by akazuki           #+#    #+#             */
/*   Updated: 2023/04/29 18:08:01 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *stack)
{
	operation_r(stack);
	write(1, "ra\n", 3);
}

void	rb(t_list *stack)
{
	operation_r(stack);
	write(1, "rb\n", 3);
}

void	rr(t_list *astack, t_list *bstack)
{
	operation_r(astack);
	operation_r(bstack);
	write(1, "rr\n", 3);
}
