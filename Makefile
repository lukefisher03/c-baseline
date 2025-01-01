main: main.o
	echo "Linking and executing main..."
	gcc -o main main.o
	# ./main
main.o: main.c
	echo "Compiling main"
	gcc -g -c main.c
