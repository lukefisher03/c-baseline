#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sorting.h"

static void merge(int *left, size_t l_size, int *right, size_t r_size, int *arr,
                  size_t arr_size) {

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

    while (l_c < l_size && c < arr_size) {
        arr[c++] = left[l_c++];
    }
    while (r_c < r_size && c < arr_size) {
        arr[c++] = right[r_c++];
    }
}

// array to sort and it's length as parameters.
void merge_sort(int *arr, size_t size) {
    if (size <= 1) {
        // Array is sorted
        return;
    }

    // split the array rounding down
    int mid_point = size / 2;

    // copy the left part of the array into a new array

    int *left = calloc(mid_point, sizeof(int));
    memcpy(left, arr, sizeof(int) * mid_point);


    // copy the right part of the array into a new array
    int *right = calloc(size - mid_point, sizeof(int));
    memcpy(right, arr + mid_point, sizeof(int) * (size - mid_point));


    // Here we recursively split the array in half the the array until
    // we get to singular elements. We start with the left half followed
    // by the right. After they get split to single elements the parent
    // recursive function calls merge to put the two halves together.
    merge_sort(left, mid_point);
    merge_sort(right, size - mid_point);

    merge(left, mid_point, right, size - mid_point, arr, size);

    free(left);
    free(right);
    return;
}

void insertion_sort(int *arr, size_t size) {
    if (size <= 1) {
        return;
    }

    // Start at the second element
    for (size_t i = 1; i < size; ++i) {
        // We need to check every other element up to i
        int e = arr[i];
        // printf("Checking element: %i\n", e);
        size_t j = i - 1;

        while (j >= 0) {
            if (e < arr[j]) {
                arr[j+1] = arr[j];
                arr[j] = e;
            } else {
                break;
            }
            --j;
        }
    }
}