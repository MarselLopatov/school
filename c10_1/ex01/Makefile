NAME = ft_cat

SRCS = ft_fill_file.c ft_print_cat.c main.c ft_error.c

OBJ = $(patsubst %.c,%.o,$(SRCS))

CC = gcc
RM = rm -f

HEADER = ft.h

CFLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJ}
		${CC} -I ${HEADER} ${OBJ} -o ${NAME}

%.o : %.c
		${CC} -c $< -o $@

clean:
		${RM} *.o *.h.gch

fclean: clean
		${RM} ${NAME}

.PHONY: all clean fclean