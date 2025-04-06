/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_inf_six.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:22:45 by iabasala          #+#    #+#             */
/*   Updated: 2025/04/06 00:36:59 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    if_two(t_stack **s)
{
    if (*s && (*s)->next && (*s)->value > (*s)->next->value)
        sa(s);
}

void    if_tree(t_stack **s)
{
    if (*s == NULL || (*s)->next == NULL || (*s)->next->next == NULL)
        return;
    int a = (*s)->value;
    int b = (*s)->next->value;
    int c = (*s)->next->next->value;
    
    if (a > b && b < c && a < c)
        sa(s);
    else if (a > b && b > c)
    {
        sa(s);
        rra(s);
    }
    else if (a > b && a > c)
        ra(s);
    else if (a < b && b > c && a < c)
    {
        sa(s);
        ra(s);
    }
    else if (a < b && b > c && a > c)
        rra(s);
}

int    find_min(t_stack *stack)
{
    t_stack *tmp = stack;
    int     min = tmp->value;
    int     pos = 0;
    int     min_pos = 0;
    
    while (tmp)
    {
        if (tmp->value < min)
        {
            min = tmp->value;
            min_pos = pos;
        }
        pos++;
        tmp = tmp->next;
    }
    return (min_pos);
}

void    if_four(t_stack **a, t_stack **b)
{
    if (!a || !*a || !(*a)->next)
        return;
    int min_pos = find_min(*a);
    int size = ft_lstsize(*a);
    
    if (min_pos <= size / 2)
    {
        while (min_pos-- > 0)
            ra(a);
    }
    else
    {
        while (min_pos++ < size)
            rra(a);
    }
    pb(a, b);
    if_tree(a);
    pa(a, b);
}

void    if_five(t_stack **a, t_stack **b)
{
    if (!*a || !(*a)->next)
        return;
    
    int min_pos = find_min(*a);
    int size = ft_lstsize(*a);
    
    if (min_pos <= size / 2)
    {
        while (min_pos-- > 0)
            ra(a);
    }//ftna nass lwl
    else//b9a nss tani li kbar mn jouj w sghar mn size
    {
        while (min_pos++ < size)
            rra(a);
    }
    pb(a, b);
    if_four(a, b);
    pa(a, b);
}
void sort_the_stack(t_stack **a, t_stack **b, int size) 
{
    if (size == 2)
        if_two(a);
    else if (size == 3)
        if_tree(a);
    else if (size == 4)
        if_four(a, b);
    else if (size == 5)
        if_five(a, b);
    else
    {
        int *sorted_array = sort_array(*a);
        if (sorted_array)
        {
            compare_pusha(sorted_array, a, b);  // <- PASS B
            free(sorted_array);
        }
    }
}


