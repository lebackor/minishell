#include "minishell.h"


int main(int ac, char **av, char **envp)
{
    (void) ac;
    (void) av;
    (void) envp;
    t_data s;
    int ret;

    //printf("%d\n", ret);
    //printf( "%s\n", readline( ">$ " ) );
    s.rdline = readline(">$");
  //  if ()
    ret = kill(0, SIGINT);
}