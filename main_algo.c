/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:29:11 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/14 11:29:11 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_numbers(t_stack *stack)
{
    int end;
    int size;
    size = ft_lstsize(stack);
    if(size<=100 )
        end = size/6;
    else
        end = size/14;
    return(end);
}
void compare(t_stack *a,t_stack **b)
{
    if(!*b)
        *b = ft_lstnew(a->value);
    else if(a->value < (*b)->value)
        sb(b);
}
void compare_pusha(int *s, t_stack **a)
{
    t_stack *b = NULL;
    int end = check_numbers(*a);
    int start = 0;

    (void)s; // Suppress unused parameter warning

    while (*a)
    {
        if ((*a)->value <= start)
        {
            pb(a, &b);
            if (b) // Ensure b is not NULL before rotating
                rb(&b);
        }
        else if ((*a)->value <= end)
        {
            pb(a, &b);
            if (b) // Ensure b is not NULL before comparing
               compare(*a, &b);
        }
        else ra
        //print_stack(*a);
        //print_stack(b);
        start++;
        end++;
    }
}
