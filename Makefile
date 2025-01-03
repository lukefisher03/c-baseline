main: main.o sorting.o utils.o search.o
	echo "Linking and executing main..."
	gcc -o main bin/*.o

main.o: main.c
	echo "Compiling main"
	gcc -g -c main.c -o bin/main.o

sorting.o: sorting.c
	echo "Compiling sorting"
	gcc -g -c sorting.c -o bin/sorting.o

search.o: search.c
	echo "Compiling search"
	gcc -g -c search.c -o bin/search.o

utils.o: utils.c
	echo "Compiling utils"
	gcc -g -c utils.c -o bin/utils.o

