/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:00:45 by akazuki           #+#    #+#             */
/*   Updated: 2023/05/02 18:51:43 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_foursort(t_list *astack)
{
	t_list	*bstack;
	t_list	*tmp;

	bstack = NULL;
	while (ft_stackcount(bstack) != 2)
	{
		tmp = astack;
		tmp = tmp -> next;
		if (tmp -> rank >= 1 && tmp -> rank <= 2)
			pb(astack, &bstack);
		else
			ra(astack);
	}
	if (bstack -> next -> rank < bstack -> next -> next -> rank)
		sb(bstack);
	if (ft_stackcount(astack) == 2)
		ft_twosort(astack);
	if (ft_stackcount(astack) == 3)
		ft_threesort(astack);
	while (ft_stackcount(bstack) != 0)
		pa(bstack, &astack);
	free(bstack);
}

void	ft_rthreesort(t_list *bstack)
{
	int	first;
	int	second;
	int	third;

	first = bstack-> next-> rank;
	second = bstack -> next -> next -> rank;
	third = bstack -> next -> next -> next -> rank;
	if (first < second && second < third && first < third)
	{
		sb(bstack);
		rrb(bstack);
	}
	else if (first < second && second > third && first < third)
		rb(bstack);
	else if (first > second && second < third && first < third)
		rrb(bstack);
	else if (first < second && second > third && first > third)
		sb(bstack);
	else if (first > second && second < third && first > third)
	{
		rrb(bstack);
		sb(bstack);
	}
	else
		return ;
}

void	ft_sixsort(t_list *astack)
{
	t_list	*bstack;
	t_list	*tmp;

	bstack = NULL;
	while (ft_stackcount(bstack) != 3)
	{
		tmp = astack;
		tmp = tmp -> next;
		if (tmp -> rank >= 1 && tmp -> rank <= 3)
			pb(astack, &bstack);
		rra(astack);
	}
	ft_threesort(astack);
	ft_rthreesort(bstack);
	while (ft_stackcount(bstack) != 0)
		pa(bstack, &astack);
	free(bstack);
}

void	ft_startsort(t_list *astack, t_list *bstack, int count)
{
	if (count == 3)
		ft_bthreesort(bstack);
	else if (count <= 5)
		ft_qfoursort(astack, bstack);
	else
		spsixsort(astack, bstack);
	while (count > 0)
	{
		if (ft_stackcount(bstack) != 0)
			pa(bstack, &astack);
		ra(astack);
		count--;
	}
}

int	ft_search(t_list *stack, int count)
{
	int		check;
	t_list	*tmp;

	tmp = stack;
	check = 0;
	while (tmp -> next != stack)
	{
		if (1 <= tmp -> next -> rank && tmp -> next -> rank <= count)
			return (check);
		else
		{
			check++;
			tmp = tmp -> next;
		}
	}
	return (check);
}
