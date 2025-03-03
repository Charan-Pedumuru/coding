CC=gcc
CFLAGS=-pthread -Wall

all: shm_example

shm_example: main.o shm_manager.o
	$(CC) $(CFLAGS) -o shm_example main.o shm_manager.o

main.o: main.c shm_manager.h
	$(CC) $(CFLAGS) -c main.c

shm_manager.o: shm_manager.c shm_manager.h
	$(CC) $(CFLAGS) -c shm_manager.c

clean:
	rm -f *.o shm_example
