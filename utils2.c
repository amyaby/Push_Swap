/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:40:42 by iabasala          #+#    #+#             */
/*   Updated: 2025/04/20 02:12:36 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	incriment_index(int *start, int *end, int size)
{
	if (*end < size - 1)
		(*end)++;
	if (*start < size - 2)
		(*start)++;
}
void	get_index(t_stack *lst) //sets an index for each node in the stack
{
	int	i;

	i = 0;
	while (lst)
	{
		lst->index = i;
		lst = lst->next;
		i++;
	}
}
t_stack *find_max(t_stack *lst)
{
    t_stack *max;

    init_index(lst);
    max = lst;
    while (lst)
    {
        if (lst->next && max->value < lst->next->value) 
            max = lst->next;
        lst = lst->next;
    }
    return (max);
}
void init_index(t_stack *stack)
{
    int i = 0;
    while (stack)
    {
        stack->index = i++;
        stack = stack->next;
    }
}

t_stack	*big_node(t_stack *lst)
{
	t_stack	*max;

	init_index(lst);
	max = lst;
	while (lst)
	{
		if (lst->next && max->value < lst->next->value)
			max = lst->next;
		lst = lst->next;
	}
	return (max);
}

