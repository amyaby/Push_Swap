/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_inf_six.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:22:45 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/07 00:15:47 by iabasala         ###   ########.fr       */
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
        if(a > b && a < c)
            ra(s);
        if(b < c && a > b)
            sa(s);
        if(b > a && b > c)
            rra(s);
        if(a < b && b > c)
        {
            sa(s);
            ra(s);
        }
}
