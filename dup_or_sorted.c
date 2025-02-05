#include "push_swap.h"

int is_duplicate(int argc, char **argv)//7tach makanbdlouch fih
{
    int i;
    i = 1;
    int j;
    while(i < argc - 1)
    {
        j  = i + 1;
        while(j < argc)
        {
             if(ft_atoi(argv[i]) == ft_atoi(argv[j]))
                return 1;
            j++;
        }
        i++;
    }
    return 0;
}

int is_sorted(int argc,char **argv)
{
    int i;
    i = 1;
    while(i < argc - 1)
    {
             if(ft_atoi(argv[i]) > ft_atoi(argv[i+1]))
                return 0;
            i++;
    }
    return 1;
}

int ft_free(char **one_arg)
{
    int i;
    i = 0;
	while (one_arg[i])
		free(one_arg[i++]);
	free(one_arg);
	return 0;
}
