/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contentin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:35:46 by akazuki           #+#    #+#             */
/*   Updated: 2023/05/02 19:49:39 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_argvcount(char **argv)
{
	int		count;
	size_t	i;

	count = 0;
	i = 0;
	while (argv[i] != NULL)
	{
		i++;
		count++;
	}
	return (count);
}

t_list	*ft_start(t_list *stack)
{
	t_list	*s;

	s = ft_lstnew(NULL);
	ft_lstadd_back(&stack, s);
	return (s);
}

t_list	*ft_contentin(int argc, char **separgv, int flag)
{
	int		*n;
	size_t	i;
	t_list	*stacka;
	t_list	*newnord;
	t_list	*end;

	if (flag == 1)
		i = 0;
	else
		i = 1;
	newnord = NULL;
	stacka = NULL;
	stacka = ft_start(stacka);
	while (i <= (size_t)argc)
	{
		n = malloc(sizeof(int));
		*n = ft_atoi(separgv[i]);
		newnord = ft_lstnew(n);
		ft_lstadd_back(&stacka, newnord);
		i++;
	}
	end = ft_lstlast(stacka);
	end -> next = stacka;
	stacka -> prev = end;
	return (stacka);
}
