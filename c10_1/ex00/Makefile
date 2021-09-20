NAME = ft_display_file

SRCS = main.c
OBJ = main.o

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror -c


all:	${NAME}

${NAME}: ${OBJ}
		${CC} ${OBJ} -o ${NAME}

%.o : %.c
		${CC} ${CFLAGS} -c $< -o $@

clean:
		${RM} *.o

fclean: clean
		${RM} ${NAME}

.PHONY: all clean fclean
