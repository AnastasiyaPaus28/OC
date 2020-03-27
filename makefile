first: first.o
	gcc  -o first first.o
	./first 
first.o: first.c
	gcc  -c first.c
clean:
	rm -f  first
