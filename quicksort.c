#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "utils.h"
#include "quicksort.h"

static void merge(int *left, int l_size, int *right, int r_size, int *arr, int arr_size) {
	printf("Merging: ");
	print_arr(left, l_size);
	printf("| ");
	print_arr(right, r_size);
	printf("\n");

	int l_c = 0;
	int r_c = 0;
	int c = 0;
	while (l_c < l_size && r_c < r_size && c < arr_size) {
		// compare left and right values
		if (left[l_c] >= right[r_c]) {
			arr[c++] = right[r_c++];
		} else {
			arr[c++] = left[l_c++];
		}
	}

	while (l_c < l_size && c < arr_size)
	{
		arr[c++] = left[l_c++];
	}
	while (r_c < r_size && c < arr_size)
	{
		arr[c++] = right[r_c++];
	}
	printf("merge result: ");
	print_arr(arr, arr_size);
	printf("\n");
}

// array to sort and it's length as parameters.
void merge_sort(int *arr, size_t l) {
	if (l <= 1) {
		// Array is sorted
		return;
	}

	// split the array rounding down
	size_t mid_point = l / 2;

	// copy the left part of the array into a new array
	printf("Left and right arrays: ");

	int *left = calloc(mid_point, sizeof(int));
	memcpy(left, arr, sizeof(int) * mid_point);

	print_arr(left, mid_point);
	printf("| ");

	// copy the right part of the array into a new array
	int *right = calloc(l - mid_point, sizeof(int));
	memcpy(right, arr + mid_point, sizeof(int) * (l-mid_point));

	print_arr(right, l-mid_point);
	printf("\n");

	// Here we recursively split the array in half the the array until
	// we get to singular elements. We start with the left half followed 
	// by the right. After they get split to single elements the parent
	// recursive function calls merge to put the two halves together.
	merge_sort(left, mid_point); 
	merge_sort(right, l-mid_point);

	merge(left, mid_point, right, l-mid_point, arr, l);

	free(left);
	free(right);
	return;
}