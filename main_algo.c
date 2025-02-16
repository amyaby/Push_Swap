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
    //printf("DEBUG: End value is: %d\n", end);
    return(end);
}
void compare(t_stack *a,t_stack **b)
{
    if(!(*b))
        *b = ft_lstnew(a->value);
    else if(a->value < (*b)->value)
        sb(b);
}
void compare_pusha(int *s,t_stack **a)
{
    t_stack *b = NULL;
int end;
end = check_numbers(*a);
int start;
start = s[0];
//printf("DEBUG: start value: %d\n", start);
//printf("DEBUG: end value: %d\n", end);
    while(*a)
    {
        if((*a)->value <= start)
        {
           // printf("DEBUG: Pushing to b and rotating (value <= start)\n");
            pb(a,&b);
            rb(&b);
        }
        if((*a)->value <= end)
        {
            //printf("DEBUG: Pushing to b and comparing (value <= end)\n");
            pb(a,&b);
            compare(*a,&b);
        }
        start++;
        end++;
        *a= (*a)->next;
    }
}