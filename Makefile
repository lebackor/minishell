SRCS = minishell.c


CLEAN_FT	=	make fclean -C libft

CLEAN_MLX	=	make clean -C minilibx-linux

all : ${NAME}

${NAME} :	${OBJS} $(LIBFT)
	@$(MLX)
	@$(MAKE) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) ${MLXFLAG} $(LDFLAGS)  -o $@
	@echo "Ca arrive..."

%.o: %.c
	@${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o} ${MLXFLAG}


$(LIBFT)	:
	@make -C libft

clean :
		rm -f ${OBJS} ${LIBFT} 
		${CLEAN_FT}
		${CLEAN_MLX}

fclean :	clean
			rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re
*/

OBJS = ${SRCS:.c=.o}

CC	=	cc

CFLAGS = -Wall -Werror -Wextra
LDFLAGS = -L libft -lft


LIBFT = libft/libft.a
NAME = minishell

CLEAN_FT	=	make fclean -C libft
all : ${NAME}

${NAME} :	${OBJS} $(LIBFT)
	@$(MLX)
	@$(MAKE) $(LIBFT)
	@$(CC) -L /usr/lib/x86_64-linux-gnu -lreadline $(CFLAGS) $(OBJS) $(LDFLAGS)  -o $@
	@echo "Ca arrive..."

%.o: %.c
	@${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o} 


clean :
		rm -f ${OBJS} ${LIBFT} 
		${CLEAN_FT}

fclean :	clean
			rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re