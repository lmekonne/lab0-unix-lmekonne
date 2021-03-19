# Lisa Mekonnen
CC = gcc
CFLAGS = -Wall

like: like.c
	$(CC) $(CFLAGS) -o $@ like.c

clean:
	rm -f like
