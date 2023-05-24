/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:47:36 by akazuki           #+#    #+#             */
/*   Updated: 2023/05/01 15:20:49 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ndptr;

	if (new == NULL)
	{
		write(2, "Error\n", 6);
		exit (1);
	}
	ndptr = ft_lstlast(*lst);
	if (ndptr == NULL)
		*lst = new;
	else
	{
		ndptr -> next = new;
		new -> prev = ndptr;
		new -> next = NULL;
	}
}
