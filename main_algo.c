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
}

void compare_pusha(int *s, t_stack **a, t_stack **b)
{
    int size = ft_lstsize(*a);
    int chunk_size = check_numbers(*a);
    int start = 0;
    int end = chunk_size;

    (void)s;

    while (*a && end < size)
    {
        if ((*a)->value <= start)
        {
            pb(a, b);
            rb(b);
            incriment_index(&start, &end, size);
        }
        else if ((*a)->value <= end)
        {
            pb(a, b);
            compare(*a, b);  // Compare after pushing
            incriment_index(&start, &end, size);
        }
        else
            ra(a);
    }
}
