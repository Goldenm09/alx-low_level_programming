CC = gcc
CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89

all: 5-sign

5-sign: _putchar.o 5-main.o 5-sign.o
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o 5-sign
