#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

void print_arr(int *arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		printf("%i ", arr[i]);
	}
}