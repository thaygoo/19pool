NAME = rush-02

SRCS = ft_atoitoa.c print.c parsing.c parsing2.c parsing_utils.c print_utils.c main.c check_for_space.c

OBJS	= ${SRCS:.c=.o}

CC+FLAGS		= gcc -Werror -Wall -Wextra -o

RM		= rm -f

${NAME}:	${OBJS}
			${CC+FLAGS}  ${NAME}  ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all