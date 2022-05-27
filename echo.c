#include "minishell.h"

int ft_echo(t_data *s)
{
    while (s->rdline[s->i] != ' ')
        s->i++;
    if (s->rdline[s->i + 1] == '-')
    {
        if (s->rdline[s->i + 2] == 'n')
            ft_print_echo(s, 0);
        else
            ft_print_echo(s, 1);
        return (0);
    }
    ft_print_echo(s, 1);
    return (0);
}

int ft_print_echo(t_data *s, int a)
{
    if (a == 0)
        write(1, &s->rdline[s->i + 4], ft_strlen(&s->rdline[s->i + 4]));
    if (a == 1)
    {
        ft_printf("%s\n", &s->rdline[s->i + 1]);
    }
    return (0);
}