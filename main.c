#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "binary_search.h"
#include "quicksort.h"
#include "utils.h"

#define ARRAY_SIZE 8

int main() {
    printf("\n\nRan this program!\n\n");
    int arr[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};
    int i = binary_search(5, arr, ARRAY_SIZE);
    printf("Result of binary search: %i\n", i);
    return 0;
}
