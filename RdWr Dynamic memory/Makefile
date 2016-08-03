CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

NAME = BSQ

SRC = main.c functions.c

OBJ = main.o functions.o

HEADER = display.h

all: comp

comp:
	$(CC) $(CFLAGS) $(SRC) 
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
	rm -f map.txt

fclean: clean
	rm -f $(NAME)

re: fclean all
