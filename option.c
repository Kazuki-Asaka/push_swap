/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:45:43 by akazuki           #+#    #+#             */
/*   Updated: 2023/04/29 18:07:31 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_s(t_list	*stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	first = stack -> next;
	second = first -> next;
	third = second -> next;
	third -> prev = second -> prev;
	second -> prev = first -> prev;
	first -> next = second -> next;
	second -> next = first;
	first -> prev = second;
	stack -> next = second;
}

void	operation_r(t_list *stack)
{
	t_list	*n_stack;
	t_list	*first;
	t_list	*second;

	n_stack = stack -> prev;
	first = stack -> next;
	second = first -> next;
	stack -> next = first -> next;
	first -> prev = stack -> prev;
	first -> next = stack;
	stack -> prev = first;
	n_stack -> next = first;
	second -> prev = stack;
}

void	operation_rr(t_list *stack)
{
	t_list	*first;
	t_list	*before;
	t_list	*n_stack;

	before = stack -> prev;
	n_stack = before -> prev;
	first = stack -> next;
	stack -> prev = before -> prev;
	stack -> next = before;
	before -> next = first;
	before -> prev = stack;
	n_stack -> next = stack;
	first -> prev = before;
}

void	ft_lstaddmid(t_list **pstack, t_list *new)
{
	t_list	*first;

	first = (*pstack)->next;
	(*pstack)->next = new;
	first -> prev = new;
	new -> next = first;
	new -> prev = (*pstack);
}

void	operation_p(t_list *stack, t_list **pstack)
{
	t_list	*first;
	t_list	*second;
	t_list	*start;
	t_list	*end;

	first = stack -> next;
	second = first -> next;
	stack -> next = second;
	second -> prev = stack;
	if (*pstack == NULL)
	{
		start = ft_lstnew(NULL);
		ft_lstadd_back(pstack, start);
		ft_lstadd_back(pstack, first);
		end = ft_lstlast(*pstack);
		start -> prev = end;
		end -> next = start;
	}
	else
	{
		start = *pstack;
		ft_lstaddmid(pstack, first);
	}
}
