/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_press.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:10:38 by akazuki           #+#    #+#             */
/*   Updated: 2023/04/29 18:32:23 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_lstcount(t_list *stack)
{
	int		count;
	t_list	*tmp;

	count = 1;
	tmp = stack;
	while (tmp -> next != stack)
	{
		count++;
		tmp = tmp -> next;
	}
	return (count);
}

static void	ft_incount(t_list *stack, int count)
{
	stack -> rank = ft_lstcount(stack) - count - 1;
}

void	ft_press(t_list *stack)
{
	int		count;
	t_list	*tmp;
	int		n;

	count = 0;
	stack = stack -> next;
	while (stack -> content != NULL)
	{
		tmp = stack;
		count = 0;
		n = *(stack -> content);
		stack = stack -> next;
		while (stack -> next != tmp -> next)
		{
			if (stack -> content == NULL)
				count += 0;
			else if (n < *(stack -> content))
				count++;
			stack = stack -> next;
		}
		stack = tmp;
		ft_incount(stack, count);
		stack = stack -> next;
	}
}
