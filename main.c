#include "push_swap.h"
int main(int argc, char **argv)
{
    t_stack *sa = NULL;
    sa = pars_push(argc,argv);
    if(!sa)
        return 0;
    printf("Before swap: ");
    print_stack(sa);
    
    swap_a(&sa);
    
    printf("After swap: ");
    print_stack(sa);
    
    return 0;
}
