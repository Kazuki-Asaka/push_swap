/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sixsort1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:37:17 by akazuki           #+#    #+#             */
/*   Updated: 2023/04/29 17:58:24 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sixsort7(int checka, int checkb, t_list *astack, t_list *bstack)
{
	if (checka == 6 && checkb == 4)
	{
		sa(astack);
		ra(astack);
		sa(astack);
		rrr(astack, bstack);
		sa(astack);
	}
	else if (checka == 6 && checkb == 5)
	{
		sa(astack);
		rr(astack, bstack);
		sa(astack);
		rra(astack);
		sa(astack);
	}
	else
	{
		sa(astack);
		rr(astack, bstack);
		ss(astack, bstack);
		rra(astack);
		sa(astack);
	}
}

static void	ft_sixsort6(int checka, int checkb, t_list *astack, t_list *bstack)
{
	if (checka == 5 && checkb == 6)
	{
		sa(astack);
		rr(astack, bstack);
		ss(astack, bstack);
		rra(astack);
	}
	else if (checka == 6 && checkb == 2)
	{
		sa(astack);
		ra(astack);
		sa(astack);
		rrr(astack, bstack);
		ss(astack, bstack);
	}
	else if (checka == 6 && checkb == 3)
	{
		ss(astack, bstack);
		ra(astack);
		sa(astack);
		rra(astack);
		sa(astack);
	}
	else
		ft_sixsort7(checka, checkb, astack, bstack);
}

static void	ft_sixsort5(int checka, int checkb, t_list *astack, t_list *bstack)
{
	if (checka == 5 && checkb == 3)
	{
		ss(astack, bstack);
		ra(astack);
		sa(astack);
		rra(astack);
	}
	else if (checka == 5 && checkb == 4)
	{
		sa(astack);
		ra(astack);
		sa(astack);
		rrr(astack, bstack);
	}
	else if (checka == 5 && checkb == 5)
	{
		sa(astack);
		rr(astack, bstack);
		sa(astack);
		rra(astack);
	}
	else
		ft_sixsort6(checka, checkb, astack, bstack);
}

void	ft_sixsort4(int checka, int checkb, t_list *astack, t_list *bstack)
{
	if (checka == 4 && checkb == 5)
	{
		rr(astack, bstack);
		sa(astack);
		rra(astack);
		sa(astack);
	}
	else if (checka == 4 && checkb == 6)
	{
		rr(astack, bstack);
		ss(astack, bstack);
		rra(astack);
		sa(astack);
	}
	else if (checka == 5 && checkb == 2)
	{
		sa(astack);
		ra(astack);
		sa(astack);
		rrr(astack, bstack);
		sb(bstack);
	}
	else
		ft_sixsort5(checka, checkb, astack, bstack);
}
