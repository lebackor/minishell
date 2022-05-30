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

typedef struct t_env
{
	char		*content;
	struct t_env	*next;
}t_env;

int ft_search_bultins(t_data *s, t_env *envp);
int ft_search_echo(t_data *s);
int ft_print_echo(t_data *s, int a);
int ft_echo(t_data *s);
t_env	*ft_addback(t_env **stack, char *str);
t_env	*create_liste(char *str);
t_env *put_env(t_env *env, char **envp);
int ft_search_env(t_data *s);
int ft_env(t_env *envp);
#endif