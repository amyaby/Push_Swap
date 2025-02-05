/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_split_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:06:18 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/05 22:46:55 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


char	*ft_strjoin(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		k;
	int		len;

	len = 0;
	i = 1;
	while (i < argc)
		len += ft_strlen(argv[i++]) + 1;
	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			str[k++] = argv[i][j++];
		str[k++] = ' ';
		i++;
	}
	str[k - 1] = '\0';
	return (str);
}
char	**split(char *s)
{
	int		words;
	char	**result;
	int		i;
	int		j;
	int		start;

	words = count_words(s);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] && delimiter(s[i]))
			i++;
		start = i;
		while (s[i] && !delimiter(s[i]))
			i++;
		result[j++] = ft_substr(s, start, i - start);
	}
	result[j] = NULL;
	return (result);
}
int    ft_atoi(char *str)
{
    int        sign;
    long    num;

    sign = 1;
    num = 0;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        num = num * 10 + (*str - '0');
        if ((num > 2147483647 && sign == 1) || (num > 2147483648 && sign == -1))
        {
            write(1, "Error\n", 6);
            exit (0);
        }
        str++;
    }
    return (int)(sign * num);
}

/*void *push_stack(t_stack **stack,int data)
{
	// t_stack *new_node = malloc(sizeof(t_stack));//raha new node mn stack
	// if(!new_node)
	// 	return NULL;
	// new_node -> value = data;
	// new_node -> next = NULL;//previous node (cuurent top)
	//  t_stack *temp = *stack;
    // while (temp->next)
	// { 
	// 	temp->next = new_node;
	// 	temp = temp->next;
	// }
    // return (*stack);
	
	t_stack *new_node = ft_lstnew(data);
	ft_lstadd_back(stack,new_node);
}*/
t_stack *push_stack(t_stack **stack, int data)
{
    t_stack *new_node = ft_lstnew(data);
    if (!new_node)
		return NULL;
	ft_lstadd_back(stack,new_node);
	return *stack;
}


