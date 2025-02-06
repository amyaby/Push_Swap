/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:04:34 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/06 23:54:48 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void rra(t_stack **a)
{
    t_stack *temp  = *a;
    t_stack *last =NULL;
    t_stack *before_last =NULL;

    if(!a)
        return;
    while(temp->next != NULL)
    {
        before_last = temp;
        temp  = temp->next;
    }
    last = temp;

    before_last ->next = NULL;//bach nsedo list w n7ebsoha flast node
    ft_lstadd_front(a,last);
    write(1,"rra\n",4);
}
void rrb(t_stack **b)
{
    t_stack *temp  = *b;
    t_stack *last =NULL;
    t_stack *before_last =NULL;

    if(!b)
        return;
    while(temp->next != NULL)
    {
        before_last = temp;
        temp  = temp->next;
    }
    last = temp;

    before_last ->next = NULL;//bach nsedo list w n7ebsoha flast node
    ft_lstadd_front(b,last);
    write(1,"rrb\n",4);
}
void rrr(t_stack **b,t_stack **a)
{
    rra(a);
    rrb(b);
    write(1,"rrr\n",4);

}
