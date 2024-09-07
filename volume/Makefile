# Define the compiler and the flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -g
LDFLAGS = -L/usr/local/lib -lcs50

# Default target will compile all .c files into executables, object files, and assembly files
all: $(patsubst %.c,%,$(wildcard *.c)) $(patsubst %.c,%.o,$(wildcard %.c)) $(patsubst %.c,%.s,$(wildcard %.c))

# Pattern rule to compile each .c file into an executable, object file, and assembly file
%: %.c
	$(CC) $(CFLAGS) -c $< -o $@.o  # Compile to object file
	$(CC) $(CFLAGS) -o $@ $@.o $(LDFLAGS)  # Link object file to create executable
	$(CC) $(CFLAGS) -S $< -o $@.s  # Generate assembly code

# Clean rule
clean:
	rm -f $(patsubst %.c,%,$(wildcard *.c)) $(wildcard *.o) $(wildcard *.s)

# Phony targets
.PHONY: all clean
