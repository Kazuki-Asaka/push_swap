/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:44:43 by akazuki           #+#    #+#             */
/*   Updated: 2023/04/29 18:08:09 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list *stack, t_list **pstack)
{
	operation_p(stack, pstack);
	write(1, "pb\n", 3);
}

void	pa(t_list *stack, t_list **pstack)
{
	operation_p(stack, pstack);
	write(1, "pa\n", 3);
}
