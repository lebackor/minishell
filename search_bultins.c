#include "minishell.h"

int ft_search_bultins(t_data *s)
{
    if (ft_search_echo(s) == 0)
        ft_echo(s);

    return (1);
}

int ft_search_echo(t_data *s)
{
    if (s->rdline[s->i] == 'e' && s->rdline[s->i + 1] == 'c' && s->rdline[s->i + 2] == 'h' && s->rdline[s->i + 3] == 'o')
    {
        
        return (0);
    }
    
    else
        return (1);
}