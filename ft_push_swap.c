/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:30:31 by akazuki           #+#    #+#             */
/*   Updated: 2023/05/04 16:47:54 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_twosort(t_list *stack)
{
	t_list	*first;
	t_list	*second;

	first = stack -> next;
	second = first -> next;
	if (first -> rank > second -> rank)
		sa(stack);
	return ;
}

void	ft_threesort(t_list *stack)
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
		rra(stack);
		sa(stack);
	}
	else if (first > second && second < third && first < third)
		sa(stack);
	else if (first < second && second > third && first > third)
		rra(stack);
	else if (first > second && second < third && first > third)
		ra(stack);
	else
	{
		ra(stack);
		sa(stack);
	}
}

void	ft_push_swap(t_list *stack)
{
	int	count;

	count = ft_stackcount(stack);
	if (count == 1)
		return ;
	else if (count == 2)
		ft_twosort(stack);
	else if (count == 3)
		ft_threesort(stack);
	else if (count <= 5)
		ft_foursort(stack);
	else if (count == 6)
		ft_sixsort(stack);
	else
		ft_qsort(stack);
}

// __attribute__((destructor))
// static void destructor(void){
//     system("leaks -q push_swap");
// }

t_list	*ft_getstack(int argc, char **argv)
{
	char	**separgv;
	t_list	*stack;
	int		flag;

	flag = 0;
	if (argc <= 1)
		exit (0);
	else if (argc == 2)
	{
		flag = 1;
		separgv = ft_split(argv[1], ' ');
		if (separgv[0] == NULL)
			ft_writeerror();
		ft_errorcheck(separgv, (size_t)0);
		stack = ft_contentin(ft_argvcount(separgv) - 1, separgv, flag);
		free_separgv(separgv);
	}
	else
	{
		ft_errorcheck(argv, (size_t)1);
		stack = ft_contentin(argc - 1, argv, flag);
	}
	return (stack);
}

int	main(int argc, char **argv)
{
	t_list	*stack;

	stack = ft_getstack(argc, argv);
	ft_stackcheck(stack);
	ft_press(stack);
	ft_sortcheck(stack);
	ft_push_swap(stack);
	ft_freelst(stack);
}
