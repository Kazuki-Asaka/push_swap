/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:25:27 by akazuki           #+#    #+#             */
/*   Updated: 2023/05/01 19:59:56 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stackcount(t_list *stack)
{
	int		count;
	t_list	*tmp;

	count = 0;
	if (stack == NULL)
		return (0);
	tmp = stack;
	while (stack -> next != tmp)
	{
		count++;
		stack = stack -> next;
	}
	return (count);
}

int	ft_threecheck(t_list *stack)
{
	int	first;
	int	second;
	int	third;

	first = *(stack -> next -> content);
	second = *(stack -> next -> next -> content);
	third = *(stack -> next -> next -> next -> content);
	if (first < second && second < third && first < third)
		return (1);
	else if (first < second && second > third && first < third)
		return (2);
	else if (first > second && second < third && first < third)
		return (3);
	else if (first < second && second > third && first > third)
		return (4);
	else if (first > second && second < third && first > third)
		return (5);
	else
		return (6);
}

void	ft_qthreesort(t_list *stack)
{
	int		first;
	int		second;
	int		third;

	first = stack -> next -> rank;
	second = stack -> next -> next -> rank;
	third = stack -> next -> next -> next -> rank;
	if (first < second && second < third && first < third)
		return ;
	else if (first < second && second > third && first < third)
	{
		ra(stack);
		sa(stack);
		rra(stack);
	}
	else if (first > second && second < third && first < third)
		sa(stack);
	else
		ft_qthreesort1(first, second, third, stack);
}

void	ft_qthreesort1(int first, int second, int third, t_list *stack)
{
	if (first < second && second > third && first > third)
	{
		ra(stack);
		sa(stack);
		rra(stack);
		sa(stack);
	}
	else if (first > second && second < third && first > third)
	{
		sa(stack);
		ra(stack);
		sa(stack);
		rra(stack);
	}
	else
	{
		ra(stack);
		sa(stack);
		rra(stack);
		sa(stack);
		ra(stack);
		sa(stack);
		rra(stack);
	}
}
