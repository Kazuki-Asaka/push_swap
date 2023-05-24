/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:02:34 by akazuki           #+#    #+#             */
/*   Updated: 2023/05/04 16:30:16 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				*content;
	struct s_list	*prev;
	struct s_list	*next;
	int				rank;
}t_list;

t_list	*ft_lstnew(int *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
int		ft_isdigit(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	operation_s(t_list	*stack);
void	operation_r(t_list *stack);
void	operation_rr(t_list *stack);
void	operation_p(t_list *stack, t_list **pstack);
void	ft_errorcheck(char **argv, size_t i);
void	ft_splitcount(char **argv);
t_list	*ft_contentin(int argc, char **separgv, int flag);
int		ft_argvcount(char **argv);
void	ft_press(t_list *stack);
int		ft_stackcount(t_list *stack);
void	sa(t_list *stack);
void	sb(t_list *stack);
void	ss(t_list *astack, t_list *bstack);
void	ra(t_list *stack);
void	rb(t_list *stack);
void	rr(t_list *astack, t_list *bstack);
void	rra(t_list *stack);
void	rrb(t_list *stack);
void	rrr(t_list *astack, t_list *bstack);
void	spft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_start(t_list *stack);
void	pb(t_list *stack, t_list **pstack);
void	pa(t_list *stack, t_list **pstack);
void	spsixsort(t_list *astack, t_list *bstack);

void	ft_foursort(t_list *astack);
void	ft_sortcheck(t_list *stack);
void	ft_rthreesort(t_list *bstack);
void	ft_twosort(t_list *stack);
void	ft_threesort(t_list *stack);
void	ft_sixsort(t_list *astack);
void	ft_qfoursort(t_list *astack, t_list *bstack);
void	ft_halfsort(t_list *astack, t_list *bstack);
void	ft_qsort(t_list *astack);
int		ft_qsortcheck(t_list *stack);
void	ft_printlst(t_list *stack);
void	ft_qthreesort(t_list *stack);
void	ft_bthreesort(t_list *bstack);
int		ft_search(t_list *stack, int count);
void	ft_sixsort4(int checka, int checkb, t_list *astack, t_list *bstack);
int		ft_threecheck(t_list *stack);
void	ft_startsort(t_list *astack, t_list *bstack, int count);
void	ft_qthreesort1(int first, int second, int third, t_list *stack);
void	free_separgv(char **separgv);
void	ft_freelst(t_list *stack);
void	ft_npzerocheck(char **argv);
void	ft_writeerror(void);
void	ft_stackcheck(t_list *stack);

#endif