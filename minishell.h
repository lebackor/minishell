#ifndef MINISHELL_H
# define MINISHELL_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdarg.h>
# include <sys/wait.h>
# include <errno.h>
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <signal.h>
# include <errno.h>
# include <stdbool.h>
# include "libft/libft.h"
typedef struct s_data{
    char *rdline;
    int i;


} t_data;
int ft_search_bultins(t_data *s);
int ft_search_echo(t_data *s);
int ft_print_echo(t_data *s, int a);
int ft_echo(t_data *s);
#endif