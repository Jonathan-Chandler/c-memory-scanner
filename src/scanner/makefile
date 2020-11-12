INCLUDES = -I../../inc/scanner
SOURCES = $(wildcard *.c)
OBJS = $(SOURCES:%.c=../../build/scanner/%.o)
OBJ_NAME = ../../scanner.exe

../../build/scanner/%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all: $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(OBJ_NAME)

clean:
	rm -f ../../build/scanner/*
	rm -f $(OBJ_NAME)

