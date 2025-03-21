CC = gcc
CFLAGS = -std=c99 -g -Wall
LDFLAGS = 
TARGET = example
OBJS = example.o ssconfig.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c ssconfig.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(TARGET) *.o

.PHONY: all clean
