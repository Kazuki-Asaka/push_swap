/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errorcheck1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:55:14 by akazuki           #+#    #+#             */
/*   Updated: 2023/05/04 16:48:28 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_npzerocheck(char **argv)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (argv[i] != NULL)
	{
		if (ft_strncmp(argv[i], "-0\0", 3) == 0 \
		|| ft_strncmp(argv[i], "+0\0", 3) == 0 \
		|| ft_strncmp(argv[i], "0\0", 2) == 0)
			count++;
		i++;
	}
	if (count > 1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

void	ft_stackcheck(t_list *stack)
{
	t_list	*tmp;

	stack = stack -> next;
	while (stack -> next -> content != NULL)
	{
		tmp = stack;
		tmp = tmp -> next;
		while (tmp -> next -> content != stack -> content)
		{
			if (tmp -> content == NULL)
				tmp = tmp -> next;
			else if (*(tmp -> content) == *(stack -> content))
				ft_writeerror();
			else
				tmp = tmp -> next;
		}
		stack = stack -> next;
	}
}
