/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:39:02 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/07 18:37:49 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void rb(t_stack **b)
{
    t_stack *temp;

    if(!(*b) || !(*b)->next)
        return;
    temp = *b;
    *b = (*b)->next;
    temp->next =NULL;
    ft_lstadd_back(b,temp);
    write(1,"rb\n",3);
}
void ra(t_stack **a)
{
    t_stack *temp;

    if(!(*a) || !(*a)->next)
        return;
    temp = *a;
    *a = (*a)->next;
    temp->next =NULL;
    ft_lstadd_back(a,temp);
    write(1,"ra\n",3);
}
void rr(t_stack **b, t_stack **a)
{
    rb(b);
    ra(a);
    write(1,"rr\n",3);
}