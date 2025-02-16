/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:10:12 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/13 19:10:12 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
void bubble_sort(int *str, int size)
{
    int sort;
    int is_swapped;
    int i;
    int j;
    
    i = 0;
    while(i < size - 1)
    {   
        is_swapped = 0;
        j = 0;
        while(j < size - 1 - i)
        {
            if(str[j] > str[j + 1])
            {
                sort = str[j];
                str[j] = str[j + 1];
                str[j + 1] = sort;
                is_swapped = 1;
            }
            j++;
        }
        if(!is_swapped)
            break;
        i++;
    }
}

int *sort_array(t_stack *stack)
{
    int i;
    i = 0;
    int *str;
    int size;
    size = ft_lstsize(stack);
    str = malloc(size * sizeof(int));
    if(!str)
        return NULL;
    while(stack)
    {
        str[i] = stack->value;
        stack = stack->next;
        i++;
    }
    /*int k = 0;
    while(k < size)
    {
        printf("------->%d", str[k]);
        k++;
    }
    printf("\n");*/
    bubble_sort(str, size);
    int k = 0;
    while(k < size)
    {
        printf("------->%d", str[k]);
        k++;
    }
    printf("\n");
    return(str);
}

