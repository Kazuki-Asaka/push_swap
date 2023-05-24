/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sixsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:15:59 by akazuki           #+#    #+#             */
/*   Updated: 2023/04/29 20:34:25 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sixsort3(int checka, int checkb, t_list *astack, t_list *bstack)
{
	if (checka == 4 && checkb == 2)
	{
		ra(astack);
		sa(astack);
		rrr(astack, bstack);
		ss(astack, bstack);
	}
	else if (checka == 4 && checkb == 3)
	{
		ra(astack);
		ss(astack, bstack);
		rra(astack);
		sa(astack);
	}
	else if (checka == 4 && checkb == 4)
	{
		ra(astack);
		sa(astack);
		rrr(astack, bstack);
		sa(astack);
	}
	else
		ft_sixsort4(checka, checkb, astack, bstack);
}

static void	ft_sixsort2(int checka, int checkb, t_list *astack, t_list *bstack)
{
	if (checka == 3 && checkb == 3)
	{
		ss(astack, bstack);
	}
	else if (checka == 3 && checkb == 4)
	{
		sa(astack);
		rrb(bstack);
	}
	else if (checka == 3 && checkb == 5)
	{
		sa(astack);
		rb(bstack);
	}
	else if (checka == 3 && checkb == 6)
	{
		rb(bstack);
		ss(astack, bstack);
	}
	else
		ft_sixsort3(checka, checkb, astack, bstack);
}

static void	ft_sixsort1(int checka, int checkb, t_list *astack, t_list *bstack)
{
	if (checka == 2 && checkb == 4)
	{
		ra(astack);
		sa(astack);
		rrr(astack, bstack);
	}
	else if (checka == 2 && checkb == 5)
	{
		rr(astack, bstack);
		sa(astack);
		rra(astack);
	}
	else if (checka == 2 && checkb == 6)
	{
		rr(astack, bstack);
		ss(astack, bstack);
		rra(astack);
	}
	else if (checka == 3 && checkb == 2)
	{
		rrb(bstack);
		ss(astack, bstack);
	}
	else
		ft_sixsort2(checka, checkb, astack, bstack);
}

static void	qft_sixsort(int checka, int checkb, t_list *astack, t_list *bstack)
{
	if (checka == 2 && checkb == 2)
	{
		ra(astack);
		sa(astack);
		rrr(astack, bstack);
		sb(bstack);
	}
	else if (checka == 2 && checkb == 3)
	{
		ra(astack);
		ss(astack, bstack);
		rra(astack);
	}
	else
		ft_sixsort1(checka, checkb, astack, bstack);
}

void	spsixsort(t_list *astack, t_list *bstack)
{
	int		checka;
	int		checkb;

	while (ft_stackcount(bstack) != 3)
	{
		if (bstack -> next -> rank > 3)
			pa(bstack, &astack);
		else
			rb(bstack);
	}
	checka = ft_threecheck(astack);
	checkb = ft_threecheck(bstack);
	if (checka == 1)
		ft_bthreesort(bstack);
	else if (checkb == 1)
		ft_qthreesort(astack);
	else
		qft_sixsort(checka, checkb, astack, bstack);
}
