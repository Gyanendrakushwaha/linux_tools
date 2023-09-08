$(CC)=gcc

one:one.o add.o sub.o
	$(CC) one.o add.o sub.o -o output

one.o:one.c file.h
	$(CC) -c one.c

add.o:add.c file.h
	$(CC) -c add.c

sub.o:sub.c file.h
	$(CC) -c sub.c
clean:
	rm -rf *.o output
