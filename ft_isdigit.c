/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:16:47 by akazuki           #+#    #+#             */
/*   Updated: 2023/03/18 15:26:46 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}

// #include<stdio.h>
// int main(void)
// {
// 	int number;
// 	int 	a;
// 	number = 49;
// 	a = ft_isdigit(number);
// 	printf("%d",a);	
// }