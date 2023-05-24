/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errorcheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:44:38 by akazuki           #+#    #+#             */
/*   Updated: 2023/05/04 16:01:46 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check(char **argv, size_t i, size_t j)
{
	int	flag;
	int	check;
	int	check1;

	flag = 0;
	check = 1;
	check1 = 1;
	while (argv[j] != NULL)
	{
		if (i == j)
			j++;
		if (argv[j] == NULL)
			break ;
		check = ft_strncmp(argv[i], argv[j], ft_strlen(argv[i]));
		check1 = ft_strncmp(argv[i], argv[j], ft_strlen(argv[j]));
		if (check == 0 && check1 == 0)
		{
			flag = 1;
			break ;
		}
		j++;
	}
	return (flag);
}

void	ft_repeatcheck(char **argv, size_t i)
{
	size_t	j;
	size_t	tmp;
	int		flag;

	j = i;
	tmp = j;
	flag = 0;
	while (argv[i] != NULL && flag != 1)
	{
		j = tmp;
		flag = ft_check(argv, i, j);
		if (flag == 1)
			break ;
		i++;
	}
	if (flag == 1)
	{
		write (2, "Error\n", 6);
		exit (1);
	}
	else
		return ;
}

void	ft_strnum(char **argv, size_t i)
{
	size_t	j;
	int		check;

	check = 1;
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			check = ft_isdigit(argv[i][j]);
			if (check == 0 && j != 0 && argv[i][j] == '-')
				break ;
			j++;
		}
		if (check == 0)
			break ;
		i++;
	}
	if (check == 0)
	{
		write(1, "Error\n", 6);
		exit (1);
	}
	else
		return ;
}

void	ft_splitcount(char **argv)
{
	char	**separgv;
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	while (argv[i] != NULL)
	{
		j = 0;
		count = 0;
		separgv = ft_split(argv[i], ' ');
		while (separgv [j] != NULL)
		{
			count++;
			j++;
		}	
		free_separgv(separgv);
		if (count != 1)
			break ;
		i++;
	}
	if (count != 1)
		ft_writeerror();
}

void	ft_errorcheck(char **argv, size_t i)
{
	ft_npzerocheck(argv);
	ft_strnum(argv, i);
	ft_repeatcheck(argv, i);
	if (i == 1)
		ft_splitcount(argv);
}
