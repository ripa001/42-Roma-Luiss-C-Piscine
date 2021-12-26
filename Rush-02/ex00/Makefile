SRCS	= main.c check.c get_num_str.c verynewfile.c ft_functions.c divide_et_impera.c newfilec.c
INCS	= include
NAME	= rush-02
CC		= gcc
RM		= rm -f
FLAGS	= -Wall -Wextra -Werror
${NAME}: ${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${SRCS}

all: ${NAME}
clean: fclean
fclean:
	${RM} ${NAME}
norm:
	norminette -R CheckForbiddenSourceHeader */*.[ch]
re: fclean all
test: re
	./${NAME} 42 | cat -e
	./${NAME} 0 | cat -e
	./${NAME} 10.4 | cat -e
	./${NAME} 100000 | cat -e
	./${NAME} numbers.dict 20 | cat -e
	./${NAME} custom.dict 20 | cat -e
.PHONY: all clean fclean re .c.o test norm