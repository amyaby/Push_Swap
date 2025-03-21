/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 01:50:41 by iabasala          #+#    #+#             */
/*   Updated: 2025/03/21 14:33:48 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *pars_push(int argc, char **argv)
{
    char *all_args;
    char **one_arg;
    t_stack *stack = NULL;
    t_stack *b = NULL;
    int i = 0;

    // Check if arguments are valid
    if (!parsing(argc, argv))
        exit(0);

    // Check for duplicates in the arguments
    if (is_duplicate(argc, argv))
    {
        write(2, "Error\n", 6);
        exit(0);
    }

    // Check if the stack is already sorted
    if (is_sorted(argc, argv))
        return NULL;

    // Combine all arguments into one string
    all_args = ft_strjoin(argc, argv);
    // Split the combined string into individual arguments
    one_arg = split(all_args);
    free(all_args); // Free the memory allocated for the concatenated string

    // If the split failed, exit with an error code
    if (!one_arg)
    {
        write(2, "Error\n", 6);
        exit(1);
    }

    // Push each argument to the stack
    while (one_arg[i])
    {
        int num = ft_atoi(one_arg[i]);  // Convert argument to integer
        push_stack(&stack, num);        // Push the number to the stack
        i++;
    }

    // Free the memory allocated for split arguments
    if (one_arg)
        free(one_arg);

    // Sort the stack
    sort_the_stack(&stack, &b, ft_lstsize(stack));

    // Return the stack (or NULL if it's already sorted)
    return stack;
}

/*t_stack *pars_push(int argc, char **argv)
{
	char *all_args;
	char **one_arg;
	t_stack *stack = NULL;
	t_stack *b = NULL;
	int i = 0;
	if (!parsing(argc,argv))
		exit(0);
	if (is_duplicate(argc, argv))
    {
        write(2, "Error\n", 6);
        exit(0);
    }
	if(is_sorted(argc,argv))
		return NULL;
	all_args = ft_strjoin(argc,argv);
	one_arg = split(all_args);
	free(all_args);
		//printf("%s---",one_arg[1]);
if (!one_arg)
{
    exit(1);
}

	while(one_arg[i])
	{
		//printf("%s---",one_arg[i]);
		int num = ft_atoi(one_arg[i]);
		push_stack(&stack,num);//pass the address of the stack(head)
		// printf("Before sorting: ");
    	//	print_stack(stack);
			//if_twoss(&stack);
	//write(1,"\n",1);
			// main(argc,argv);
			// printf("After sorting: ");
   //print_stack(stack);
		i++;
	}    
	if(one_arg)
		free(one_arg);
	sort_the_stack(&stack, &b, ft_lstsize(stack));
}
	
	// if_five(&stack, &b);
   // print_stack(stack);
	//return stack;	
	//printf("Before if_five: ");
   // print_stack(stack);
    
    
    //printf("After if_five: ");
   // print_stack(stack);
    
    //return stack;
	*/
	/*int *sorted_array;
	printf("------------");
	printf("Before sorting\n");
sorted_array = sort_array(stack);
printf("After sorting\n");
printf("------------");
if (sorted_array)
{
	printf("Sorted array exists, calling compare_pusha\n");
    compare_pusha(sorted_array, &stack);
	 free(sorted_array);
}
else
{
    printf("sort_array() returned NULL!\n");
}*/
/*if (one_arg)
{
    printf("Freeing one_arg\n");
    ft_free(one_arg);
}
else
{
    printf("one_arg is NULL, skipping free.\n");
}
//ft_free(one_arg);
return stack;*/
