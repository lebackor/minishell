#include "minishell.h"


int main(int ac, char **av, char **envp)
{
    (void) ac;
    (void) av;
    (void) envp;
    char *str;

    //printf( "%s\n", readline( ">$ " ) );
    str = readline(">$");
    printf("coco%s\n", str);
}