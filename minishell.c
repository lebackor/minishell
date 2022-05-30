#include "minishell.h"


int main(int ac, char **av, char **envp)
{
    (void) ac;
    (void) av;
    (void) envp;
    t_data *s;

    s = NULL;
    s = malloc(sizeof(t_data));
    *s = (t_data){0};
    s->rdline = readline(">$");
    ft_search_bultins(s); 
    if (ft_strcmp(s->rdline, "exit") == 0)
     {
      ft_printf("exit\n"); 
      return (1);
     } 
    while (ft_strcmp(s->rdline, "exit") != 0)
    {
      add_history(s->rdline);
      s->rdline = readline(">$");
      ft_search_bultins(s);
    }
    if (ft_strcmp(s->rdline, "exit") == 0)
     {
      ft_printf("exit\n"); 
      return (1);
     } 
  //  if ()
}