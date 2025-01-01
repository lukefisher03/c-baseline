main: main.o quicksort.o utils.o
	echo "Linking and executing main..."
	gcc -o main main.o quicksort.o utils.o

main.o: main.c
	echo "Compiling main"
	gcc -g -c main.c

quicksort.o: quicksort.c
	echo "Compiling quicksort"
	gcc -g -c quicksort.c

utils.o: utils.c
	echo "Compiling utils"
	gcc -g -c utils.c

