#include "minishell.h"


int main(int ac, char **av, char **envp)
{
    (void) ac;
    (void) av;
    (void) envp;
    char *str;
    int ret;

    ret = kill(SIGINT)
    //printf( "%s\n", readline( ">$ " ) );
    str = readline(">$");
    if ()
    printf("coco%s\n", str);
}