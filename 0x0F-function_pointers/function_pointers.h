#ifndef MY_HEADER
#define MY_HEADER

#include <stddef.h>

void print_name(char *name, void (*f)(char *));

void array_itrerator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));




#endif
