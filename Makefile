main: main.o sorting.o utils.o binary_search.o
	echo "Linking and executing main..."
	gcc -o main main.o sorting.o binary_search.o utils.o

main.o: main.c
	echo "Compiling main"
	gcc -g -c main.c

sorting.o: sorting.c
	echo "Compiling sorting"
	gcc -g -c sorting.c

binary_search.o: binary_search.c
	echo "Compiling binary_search"
	gcc -g -c binary_search.c

utils.o: utils.c
	echo "Compiling utils"
	gcc -g -c utils.c

