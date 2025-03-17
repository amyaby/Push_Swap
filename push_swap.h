#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>


#define INT_MAX 2147483647
#define INT_MIN -2147483648

typedef struct s_stack
{
	int			value;
	struct s_stack	*next;
}t_stack;

int is_check(char *str);
int is_duplicate(int argc, char **argv);
int is_sorted(int argc,char **argv);
int is_check(char *str);
int parsing(int argc, char **argv);
char	*ft_strjoin(int argc, char **argv);
char	**split(char *s);
t_stack *push_stack(t_stack **stack,int data);
char	*ft_substr(char *s, int start, int len);
size_t	ft_strlen(const char *str);
int	delimiter(char c);
int	count_words(char *s);
int    ft_atoi(char *str);
int ft_free(char **one_arg);
t_stack *pars_push(int argc, char **argv);
void swap_a(t_stack **a);
void swap_b(t_stack **b);
void print_stack(t_stack *s);
t_stack	*ft_lstnew(int content);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);
void rb(t_stack **b);
void ra(t_stack **a);
void rr(t_stack **b, t_stack **a);
void rra(t_stack **stack);
void rrb(t_stack **stack);
void sa(t_stack **a);
void sb(t_stack **b);
void ss(t_stack **a, t_stack **b);
void rrr(t_stack **b,t_stack **a);
void free_stack(t_stack *s);
void if_two(t_stack **s);
void if_tree(t_stack **s);
void if_four(t_stack **a ,t_stack **b );
void if_five(t_stack **a, t_stack **b);
int	ft_lstsize(t_stack *lst);
int stack_contains(t_stack *stack, int val1, int val2);
int *sort_array(t_stack *a);
void bubble_sort(int *str,int size);
void compare_pusha(int *s, t_stack **a);
void compare(t_stack *a,t_stack **b);







#endif