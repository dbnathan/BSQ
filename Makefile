##
## EPITECH PROJECT, 2023
## BSQ
## File description:
## Makefile
##

NAME	=	bsq

OBJ	=	$(SRC:.c=.o)

INC	=	includes/my.h

SRC	=	sources/main.c \
		sources/read_map.c	\
		sources/utils.c	\
		sources/find_square.c	\
		sources/error_manage.c \
		sources/find_square2.c \
		sources/my_str_to_word_array.c \

all: bsq

%.o: %.c $(INC)
				$(CC) $(CFLAGS) -g3 -c -o $@ $<

bsq: $(OBJ)
				$(CC) $(CFLAGS) -g3 -o $@ $(OBJ) $(LDFLAGS)

clean:
		rm -f $(OBJ)
		rm -f *~
		rm -f \#~\#

fclean: clean
		rm -f $(OBJ) bsq

re: 	fclean all
