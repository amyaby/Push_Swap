/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:50:52 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/06 23:45:10 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void sa(t_stack **a)
{       
    if( !a ||!(*a) || !(*a)->next)
        return;
    int swap;
        swap = (*a)->value;
        (*a)->value = (*a)->next->value;
        (*a)->next->value = swap;        
    write(1,"sa\n",3);

}
void sb(t_stack **b)
{

    if(!b || !(*b) || !(*b)->next)
        return;
    int swap;
        swap = (*b)->value;
        (*b)->value = (*b)->next->value;
        (*b)->next->value = swap;        
        write(1,"sb\n",3);

}
void ss(t_stack **a, t_stack **b)
{
    sa(a);
    sb(b);
    write(1,"ss\n",3);
}
