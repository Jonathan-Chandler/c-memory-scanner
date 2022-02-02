INCLUDES = -I../../inc/scanner -I../../inc/unit_tests
SOURCES = $(wildcard *.c)
OBJS = $(SOURCES:%.c=../../build/unit_tests/%.o)
OBJ_NAME = ../../unit_test.exe

# filter out scanner main function
SCANNER_MAIN = $(shell ls ../../build/scanner/main.o)
ALL_SCANNER_OBJS = $(shell ls ../../build/scanner/*.o)
FILTERED_SCANNER_OBJS = $(filter-out $(SCANNER_MAIN),$(ALL_SCANNER_OBJS))

../../build/unit_tests/%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all: $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) $(FILTERED_SCANNER_OBJS) -o $(OBJ_NAME)

clean:
	rm -f $(OBJ_NAME)
	rm -f ../../build/unit_tests/*
	rm -f ../../data/unit_tests/unit_test_save.dat
	rm -f ../../data/unit_tests/save_dir/*


