#include "binary_search.h"

// Search through sorted array
int binary_search(int target, const int *arr, size_t size) {
    // Create a left and a right pointer
    size_t left = 0;
    size_t right = size - 1;

    // This is "<=" because we want to narrow down to a single index
    while (left <= right) {
        // Calculate the midpoint by averaging the left and right values.
        // But then add the left index to shift over appropriately.
        int mid = ((right - left) / 2) + left;

        if (target == arr[mid]) {
            return mid;
        } else if (target > arr[mid]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}