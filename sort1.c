/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:42:18 by akazuki           #+#    #+#             */
/*   Updated: 2023/05/01 20:01:11 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list *astack, t_list *bstack, int count1)
{
	while (ft_stackcount(bstack) != count1)
	{
		if (1 <= bstack -> next -> rank && bstack -> next -> rank <= count1)
		{
			if (ft_search(bstack, count1) > count1 / 2)
				rrb(bstack);
			else
				rb(bstack);
		}
		else
			pa(bstack, &astack);
	}
}

void	ft_halfsort(t_list *astack, t_list *bstack)
{
	int	count;
	int	count1;

	ft_press(bstack);
	count = ft_stackcount(bstack);
	if (count <= 6)
		ft_startsort(astack, bstack, count);
	else
	{
		count1 = count / 2;
		ft_press(bstack);
		ft_push(astack, bstack, count1);
		ft_halfsort(astack, bstack);
		while (count - count1 > 0)
		{
			pb(astack, &bstack);
			count--;
		}
		ft_halfsort(astack, bstack);
	}
}

void	ft_qsort(t_list *astack)
{
	t_list	*bstack;
	int		count;

	count = ft_stackcount(astack);
	count = count / 2;
	bstack = NULL;
	while (ft_stackcount(bstack) < count)
	{
		if (1 <= astack -> next -> rank && astack -> next -> rank <= count)
			pb(astack, &bstack);
		else
		{
			if (ft_search(astack, count) > count / 2)
				rra(astack);
			else
				ra(astack);
		}
	}
	ft_halfsort(astack, bstack);
	while (ft_stackcount(astack) - count > 0)
		pb(astack, &bstack);
	ft_halfsort(astack, bstack);
	free(bstack);
}
