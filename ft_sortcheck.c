/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortcheck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:12:28 by akazuki           #+#    #+#             */
/*   Updated: 2023/04/29 18:12:28 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sortcheck(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp -> next != stack)
	{
		if (tmp -> rank > tmp -> next -> rank)
			return ;
		else
			tmp = tmp -> next;
	}
	exit (0);
}

int	ft_qsortcheck(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp -> next != stack)
	{
		if (tmp -> rank > tmp -> next -> rank)
			return (1);
		else
			tmp = tmp -> next;
	}
	return (0);
}

// void    ft_printlst(t_list *stack)
// {
//     t_list *tmp;

//     tmp = stack;
//     printf("content; %p\n", stack -> content);
//        printf("now; %p\n", tmp);
//         printf("prev; %p\n", tmp -> prev);
//         printf("next; %p\n", tmp -> next);
// 	printf("rank; %d\n", stack -> rank);
//     tmp = tmp -> next;
//     while(tmp -> next != stack)
//     {
//         printf("content; %d\n", *(tmp -> content));
//         printf("now; %p\n", tmp);
//         printf("prev; %p\n", tmp -> prev);
//         printf("next; %p\n", tmp -> next);
// 		printf("rank; %d\n", tmp -> rank);
//         tmp = tmp -> next;
//     }
//           printf("content; %d\n", *(tmp -> content));
//         printf("now; %p\n", tmp);
//         printf("prev; %p\n", tmp -> prev);
//         printf("next; %p\n", tmp -> next);
// 		printf("rank; %d\n", tmp -> rank);

// }