#include "minishell.h"
t_env	*create_liste(char *str)
{
	t_env	*stack;

	stack = malloc(sizeof(t_env));
	stack->content = ft_strdup(str);
    stack->next = NULL;
	return (stack);
}
t_env	*ft_addback(t_env **stack, char *str)
{
	t_env	*t_pile;

	if (!(*stack))
		(*stack) = create_liste(str);
	else
	{
		t_pile = *stack;
		while (t_pile->next != NULL)
			t_pile = t_pile->next;
		t_pile->next = create_liste(str);
	}
	return (*stack);
}
