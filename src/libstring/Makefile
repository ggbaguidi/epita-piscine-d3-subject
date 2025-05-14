CC = gcc
CFLAGS = -Wall -Wextra -fPIC
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
SHARED_LIB = libstring.so
STATIC_LIB = libstring.a

all: shared static

clean:
	rm -f $(OBJ)

distclean: clean
	rm -f $(SHARED_LIB) $(STATIC_LIB)

shared: $(SHARED_LIB)
libstring.so: $(OBJ)
	$(CC) -shared -o $@ $^

static: $(STATIC_LIB)
libstring.a: $(OBJ)
	ar rcs $@ $^

# Pattern rule for object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean distclean shared static
