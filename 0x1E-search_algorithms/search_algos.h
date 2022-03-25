#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int advanced_binary(int *array, size_t size, int value);
int bhelper(int *array, int value, size_t low, size_t high);
void print_array(int *array, size_t low, size_t high);


#endif
