#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "utils.h"
#include "quicksort.h"

#define ARRAY_SIZE 4

int main() {
	printf("\n\nRan this program!\n\n");
	int arr[ARRAY_SIZE] = {9,3,6,4};
	merge_sort(arr, ARRAY_SIZE);
	print_arr(arr, ARRAY_SIZE);

	printf("\n");
	return 0;
}