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
    int size = ft_lstsize(stack);
    int end;

    if (size == 0)
        return 1;

    if (size <= 100)
        end = size / 6;
    else
        end = size / 14;

    return end;
}

void compare(t_stack *a, t_stack **b)
{
    if (a && *b && a->value < (*b)->value)
        sb(b);
    else
        return;
}

/*void compare_pusha_toB(t_stack **a, t_stack **b,int *bub_sort, int size)
{
    //int size = ft_lstsize(*a);
    int end = check_numbers(*a);
    int start = 0;
    while (*a && end < size)
    {
        if ((*a)->value <= bub_sort[start])
        {
            pb(a, b);
            rb(b);
            incriment_index(&start, &end, size);
        }
        else if ((*a)->value <= bub_sort[end])
        {
            pb(a, b);
            compare(*a, b);
            incriment_index(&start, &end, size);
        }
        else
            ra(a);     
    }
   
}*/
void compare_pusha_toB(t_stack **a, t_stack **b, int *bub_sort, int size)
{
    int end = check_numbers(*a);
    int start = 0;

int pushed = 0;
while (pushed < size)

{
    if ((*a)->value <= bub_sort[start])
    {
        pb(a, b);
        rb(b);
        incriment_index(&start, &end, size);
    }
    else if ((*a)->value <= bub_sort[end])
    {
        pb(a, b);
        compare(*a, b);
        incriment_index(&start, &end, size);
    }
    else
        ra(a);
    pushed++;
}
}



void  push_back_to_a(t_stack **a, t_stack **b)
{
    t_stack *biggest;

    while (*b)
    {
        biggest = big_node(*b);  
        while (biggest->value != (*b)->value)
        {
            if (biggest->index <= ft_lstsize(*b) / 2)
                rb(b); 
            else
                rrb(b);
        }
        pa(a, b);
        (*b) = (*b)->next;
    }
}

void algo(t_stack **a, t_stack **b, int *arr, int size)
{
    int *bub_sort;

    if (!(*a))
        return;
    bub_sort = bubble_sort(arr, size);
    compare_pusha_toB(a, b, bub_sort, size);
    push_back_to_a(a, b);

}
