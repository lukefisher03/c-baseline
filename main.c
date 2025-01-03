#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "search.h"
#include "sorting.h"
#include "utils.h"

#define ARRAY_SIZE 6

int main() {
    printf("\n\nRan this program!\n\n");
    int arr[ARRAY_SIZE] = {-100, 9, -10, 5, 62, -34};
    insertion_sort(arr, ARRAY_SIZE);

    printf("Result of Insertion Sort\n");
    print_arr(arr, ARRAY_SIZE);
    printf("\n");
    return 0;
}
