INCLUDES = -I../../inc/scanner
SOURCES = $(wildcard *.c)
OBJS = $(SOURCES:%.c=../../build/test_application/%.o)
OBJ_NAME = ../../test_application.exe

../../build/test_application/%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all: $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(OBJ_NAME)

clean:
	rm -f $(OBJ_NAME)
	rm -f ../../build/test_application/*

