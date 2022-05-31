#include "minishell.h"

t_env *put_env(t_env *env, char **envp)
{
    int i;
  //  t_env *tmp;

    i = 0;
    //tmp = env;
    while (envp[i])
    {
        env = ft_addback(&env, envp[i]);
        i++;
    }
    return (env);
}

int ft_env(t_env *envp)
{
    t_env *tmp;

    tmp = envp;
    while (tmp->next != NULL)
    {
        ft_printf("%s\n", tmp->content);
        tmp = tmp->next;
    }
    if (tmp->content)
        ft_printf("%s\n", tmp->content);
    return (1);
}