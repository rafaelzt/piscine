vpath %.dict ./dictionaries

TARGET=rush-02
CC=gcc

C_SOURCE=$(wildcard *.c)

FILES=main.c ft_atoi.c ft_strcpy.c ft_strstr.c 

# Compiler Flags
#	-Wall:		Enables all compiler's warning messages
#	-Wextra:	Enables some extra warning flags that are not enabled by -Wall
#	-Werror:	Make all warnings into errors
#	-o <file>:	Write output to <file>
CFLAGS = -Wall -Werror -Wextra
CFLAGS_DEBUG = -Wall -Werror -Wextra -fsanitize=address -std=c99 -g

# Compilation and linking
all: fclean	build


build: ./dictionaries/*.dict $(C_SOURCE)
	@ echo 'Building target using GCC compiler: $<'
	$(CC) $(CFLAGS) -o $(TARGET) $(FILES)

test_err: all
	./$(TARGET)	""
	./$(TARGET) "A"

debug: fclean
	@ echo 'Building target using GCC compiler with debug flags: $<'
	$(CC) $(CFLAGS_DEBUG) -o $(TARGET) $(FILES)

fclean: clean
	
clean:
	@ echo 'Removing older version! $<'
	@ $(RM) $(TARGET)

.PHONY: all fclean clean