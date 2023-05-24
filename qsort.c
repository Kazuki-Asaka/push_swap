/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:23:11 by akazuki           #+#    #+#             */
/*   Updated: 2023/04/29 17:23:11 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bthreesort(t_list *bstack)
{
	int		first;
	int		second;
	int		third;

	first = bstack -> next -> rank;
	second = bstack -> next -> next -> rank;
	third = bstack -> next -> next -> next -> rank;
	if (first < second && second < third && first < third)
		return ;
	else if (first < second && second > third && first < third)
	{
		rrb(bstack);
		sb(bstack);
	}
	else if (first > second && second < third && first < third)
		sb(bstack);
	else if (first < second && second > third && first > third)
		rrb(bstack);
	else if (first > second && second < third && first > third)
		rb(bstack);
	else
	{
		rb(bstack);
		sb(bstack);
	}
}

void	ft_qfoursort(t_list *astack, t_list *bstack)
{
	int		count;

	ft_press(bstack);
	count = ft_stackcount(bstack);
	while (ft_stackcount(bstack) != 2)
	{
		if (bstack -> next -> rank > 2)
			pa(bstack, &astack);
		else
			rb(bstack);
	}
	if (bstack -> next -> rank > bstack -> next -> next -> rank)
		sb(bstack);
	if (count == 4)
		ft_twosort(astack);
	else
		ft_qthreesort(astack);
}
