/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:38:45 by akazuki           #+#    #+#             */
/*   Updated: 2023/05/01 15:19:06 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int *content)
{
	t_list	*ndptr;

	ndptr = malloc(sizeof(t_list));
	if (ndptr == NULL)
	{
		write(2, "Error\n", 6);
		exit (1);
	}
	ndptr ->content = content;
	ndptr ->next = NULL;
	ndptr ->prev = NULL;
	ndptr -> rank = 0;
	return (ndptr);
}
