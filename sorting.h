#ifndef SORTING_LIB_H
#define SORTING_LIB_H

static void merge(int *left, size_t l_size, int *right, size_t r_size, int *arr,
                  size_t arr_size);
void merge_sort(int *arr, size_t size);
void insertion_sort(int *arr, size_t size);
#endif