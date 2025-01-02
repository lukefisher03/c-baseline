main: main.o quicksort.o utils.o binary_search.o
	echo "Linking and executing main..."
	gcc -o main main.o quicksort.o binary_search.o utils.o

main.o: main.c
	echo "Compiling main"
	gcc -g -c main.c

quicksort.o: quicksort.c
	echo "Compiling quicksort"
	gcc -g -c quicksort.c

binary_search.o: binary_search.c
	echo "Compiling binary_search"
	gcc -g -c binary_search.c

utils.o: utils.c
	echo "Compiling utils"
	gcc -g -c utils.c

