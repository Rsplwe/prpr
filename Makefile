CC=gcc
CFLAGS=-O3 -Wall

all: prpr

prpr: prpr.c
	$(CC) $(CFLAGS) -o prpr prpr.c

clean:
	rm -f prpr
