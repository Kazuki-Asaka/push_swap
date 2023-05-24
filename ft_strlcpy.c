/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:14:27 by akazuki           #+#    #+#             */
/*   Updated: 2023/03/18 15:22:33 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	n;

	n = 1;
	srcsize = ft_strlen(src);
	if (dstsize == 0 && *src && dest == NULL)
		return (srcsize + dstsize);
	if (dstsize != 0)
	{
		if (srcsize >= dstsize)
		{
			while (n++ <= dstsize - 1)
				*dest++ = *src++;
			*dest = '\0';
		}
		else
		{
			while (*src != '\0')
			{
				*dest++ = *src++;
			}
			*dest = '\0';
		}
	}
	return (srcsize);
}

// #include<string.h>
// int main(void)
// {
// 	char str1[100]= "abcdefg";
// 	char str2[100]= "klmnop";
// 	char str3[100]= "abcdefg";
// 	char str4[100]= "klmnop";
// 	char str5[100]= "abcdefg";
// 	char str6[100]= "klmnop";
// 	// size_t i;
// 	strlcpy(str1, str2, 0);
// 	printf("本家%s\n", str1);
// 	// i = ft_strlen(str1);
// 	ft_strlcpy(str3, str4, 0);
// 	printf("自作%s\n",str3);
// 	strncpy(str5,str6,5);
// 	printf("n試験%s\n",str5);
// 	char c[256] = "42tokyo";
// 	ft_strlcpy(NULL , "aiueo", 0);
// 	printf("%zu\n", ft_strlcpy(NULL , "aiueo", 0));
// 	// ft_strlcpy(NULL , "aiueo", 2);
// 	// printf("%zu\n", ft_strlcpy(NULL , "aiueo", 2));
// 	ft_strlcpy(c, NULL, 0);
// 	printf("%zu\n", ft_strlcpy(NULL, NULL, 2));
// }