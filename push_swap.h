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
void swap_a(t_stack **sa);
void swap_b(t_stack **sb);
void print_stack(t_stack *s);
t_stack	*ft_lstnew(int content);
void	ft_lstadd_back(t_stack **lst, t_stack *new);







#endif