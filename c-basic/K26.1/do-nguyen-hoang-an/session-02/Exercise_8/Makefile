CC = gcc
CFLAGS = -Wall -Wextra
BINS = main

.PHONY: all clean

all: $(BINS)

main: main.c
	@echo "Compiling main.c..."
	$(CC) $(CFLAGS) -o main main.c

clean:
	@echo "Cleaning up build files..."
	rm -f $(BINS)