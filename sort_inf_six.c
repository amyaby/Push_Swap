/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_inf_six.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:22:45 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/08 16:06:46 by iabasala         ###   ########.fr       */
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
void if_four(t_stack **a ,t_stack **b )
{
    if(*a == NULL || (*a)->next == NULL)// if stack a is empty ||if there is only one element in stack a
        return;
    int i = 0;
    t_stack *tmp = *a;
    int min =  INT_MAX;
    int min_index = 0;
    while(tmp)
    {
            if(tmp->value < min)
            {
                min =  tmp->value;
                min_index = i;
            }
    tmp = tmp->next;
    i++;     
    }
    if(min_index == 1)
        sa(a);
    else if (min_index == 2)
    {
        rra(a);
        rra(a);
    }
    else if(min_index == 3)
        rra(a);
    pb(a,b);
    if_tree(a);
    pa(a,b);
}
