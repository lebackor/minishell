SRCS = minishell.c

OBJS = ${SRCS:.c=.o}

CC	=	cc

CFLAGS = -Wall -Werror -Wextra

NAME = minishell

all : ${NAME}

${NAME} :	${OBJS}
	@$(CC) -L /usr/lib/x86_64-linux-gnu -lreadline $(CFLAGS) $(OBJS) -o $@
	@echo "Ca arrive..."

%.o: %.c
	@${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o} 

clean :
		rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re