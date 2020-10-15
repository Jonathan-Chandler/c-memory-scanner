ECHO = echo
MAKE = mingw32-make
CC = gcc
INCLUDES = -Iinc
CFLAGS = -Wall

SOURCES = $(wildcard src/*.c)
OBJS = $(SOURCES:src/%.c=build/debug/%.o)
OBJ_NAME = memscan-debug.exe

build/debug/%.o: src/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all: $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(OBJ_NAME)

clean:
	rm *.exe build/no_debug/*.o build/unit_tests/*.o
#	rm *.exe build/debug/*.o

