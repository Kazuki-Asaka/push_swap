/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:51:52 by akazuki           #+#    #+#             */
/*   Updated: 2023/05/01 15:54:18 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freelst(t_list *stack)
{
	t_list	*tmp;
	t_list	*tmp_tmp;

	tmp = stack -> next;
	while (tmp -> rank != 0)
	{
		tmp_tmp = tmp->next;
		free(tmp->content);
		free(tmp);
		tmp = tmp_tmp;
	}
	free(tmp);
}

void	free_separgv(char **separgv)
{
	size_t	i;

	i = 0;
	while (separgv[i] != NULL)
	{
		free(separgv[i]);
		i++;
	}
	free(separgv);
}
