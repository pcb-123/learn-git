CC = gcc
CFLAGS = -g -Iinclude
TARGET = ../build/program
SRCS = src/main.c src/utils.c

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)