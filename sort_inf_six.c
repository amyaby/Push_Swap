/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_inf_six.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:22:45 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/09 16:24:23 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void if_two(t_stack **s)
{
    if(*s && (*s)->next && (*s)->value > (*s)->next->value)
        sa(s);
}
void if_tree(t_stack **s)
{
     if (*s == NULL || (*s)->next == NULL || (*s)->next->next == NULL)
        return;
    int a =  (*s)->value;
    int b = (*s)->next->value;
    int c = (*s)->next->next->value;
    
    if (a > b && b < c && a < c) 
        sa(s);
    if (a > b && b > c)
    {
        sa(s);
        rra(s);
    }
    if (a > b && a > c)
        ra(s);
    if (a < b && b > c && a < c)
    {
        sa(s);
        ra(s);
    }
    if(a < b && b > c && a > c)
    {
        rra(s);
    }
}
int where_is_min(t_stack *stack)
{
    int i;
    int min;
    int min_index;
    t_stack *tmp;

    i = 0;
    min = INT_MAX;
    min_index = 0;
    tmp = stack;
    while (tmp)
    {
        if (tmp->value < min)
        {
            min = tmp->value;
            min_index = i;
        }
        tmp = tmp->next;
        i++;
    }
    return (min_index);
}

void if_four(t_stack **a, t_stack **b)
{
    int min_index;

    if (!a || !*a || !(*a)->next)
        return;
    min_index = where_is_min(*a);
    if (min_index == 1)
        sa(a);
    else if (min_index == 2)
        ra(a), ra(a);
    else if (min_index == 3)
        rra(a);
    pb(a, b);
    if_tree(a);
    pa(a, b);
}

/*void if_four(t_stack **a, t_stack **b)
{
    if (!*a || !(*a)->next)
        return;
    t_stack *tmp = *a;
    int min = tmp->value;
    int pos = 0;
    int min_pos = 0;
    int size = 0;
    
    while (tmp)
    {
        if (tmp->value < min)
        {
            min = tmp->value;
            min_pos = pos;
        }
        pos++;
        size++;
        tmp = tmp->next;
    }
    if (min_pos <= size/2)
    {
        while (min_pos--)
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
}*/
/*void if_five(t_stack **a, t_stack **b)
{
    int min_index;

    if (!a || !*a || !(*a)->next)
        return;

    min_index = where_is_min(*a);

    if (min_index == 1)
        sa(a);
    else if (min_index == 2)
        ra(a), ra(a);
    else if (min_index == 3)
        rra(a), rra(a);
    else if (min_index == 4)
        rra(a);

    pb(a, b);
    if_four(a, b);
    pa(a, b);
}*/
void algo_for5_elements(t_stack **a)
{
    
    t_stack *b;
    
    if(!*a || !(*a)->next)
        return ;
    b = NULL;
    int smallest_idx = where_is_min(a);
    if (smallest_idx <= 2)
    {
        while (smallest_idx-- > 0) //smallest_idx--
        {
            ra(a);
        }   
    }
    else
    {
        while (smallest_idx++ < 5) // smallest_idx++ < 5
        {
            rra(a);
        }
    }
    pb(a, &b);
    if_four(&a,&b);
    pa(a, &b);
}
void if_five(t_stack **a, t_stack **b)
{
    if (!*a || !(*a)->next)
        return;
    
    // Find both smallest and second smallest in one pass
    t_stack *tmp = *a;
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    int min1_pos = 0;
    int min2_pos = 0;
    int pos = 0;
    
    while (tmp)
    {
        if (tmp->value < min1)
        {
            min2 = min1;
            min2_pos = min1_pos;
            min1 = tmp->value;
            min1_pos = pos;
        }
        else if (tmp->value < min2)
        {
            min2 = tmp->value;
            min2_pos = pos;
        }
        pos++;
        tmp = tmp->next;
    }
    
    // Push two smallest numbers to stack b efficiently
    while (*a && ((*a)->value == min1 || (*a)->value == min2))
    {
        pb(a, b);
    }
    while (*a && stack_contains(*a, min1, min2))
    {
        if (min1_pos <= 2 && min2_pos <= 2)
            ra(a);
        else
            rra(a);
    }
    
    // Sort remaining 3 numbers
    if_tree(a);
    
    // Push back in correct order
    if ((*b)->value < (*b)->next->value)
        sb(b);
    pa(a, b);
    pa(a, b);
}

// Helper function to check if stack contains either value
int stack_contains(t_stack *stack, int val1, int val2)
{
    while (stack)
    {
        if (stack->value == val1 || stack->value == val2)
            return (1);
        stack = stack->next;
    }
    return (0);
}