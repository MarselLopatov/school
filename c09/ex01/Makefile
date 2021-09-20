SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

HEADER	= ./includes/ft.h

CC = gcc
RM = rm -f

CFLAGS = -Wall -Werror -Wextra

all:	${NAME}

.c.o:
		${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.0}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:
		fclean all

.PHONY:	all clean fclean re