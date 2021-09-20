NAME = do-op

CFALGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_do_op.c ft_putnbr.c ft_putstr.c ft_calc.c ft_do_calc.c main.c 

HEADER = ft.h

OBJ = $(patsubst %.c,%.o,$(SRCS))

CC = gcc
RM = rm -f

all: ${NAME}


${NAME}: ${OBJ}
		${CC} ${CFALGS} -I ${HEADER} ${OBJ} -o ${NAME}

%.o : %.c
		${CC} ${CFLAGS} -c $< -o $@

clean:
		${RM} *.o *.gch

fclean: clean
		${RM} ${NAME}

.PHONY: all clean fclean