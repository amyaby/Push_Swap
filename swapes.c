/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:50:52 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/05 23:22:30 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void print_stack(t_stack *s)
{
    t_stack *temp;
    temp = s;
    while(temp)
    {         
        printf("%d   ",temp->value);
        temp = temp->next;       
    }
}*/
void swap_a(t_stack **sa)
{       
    if( !sa ||!(*sa) || !(*sa)->next)
        return;
    int swap;
        swap = (*sa)->value;
        (*sa)->value = (*sa)->next->value;
        (*sa)->next->value = swap;        
    write(1,"sa\n",3);

}
void swap_b(t_stack **sb)
{

    if(!sb || !(*sb) || !(*sb)->next)
        return;
    int swap;
        swap = (*sb)->value;
        (*sb)->value = (*sb)->next->value;
        (*sb)->next->value = swap;        
        write(1,"sb\n",3);

}
void swap_both(t_stack **sa, t_stack **sb)
{
    swap_a(sa);
    swap_b(sb);
    write(1,"ss\n",3);
}
