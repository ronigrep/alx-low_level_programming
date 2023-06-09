#ifndef HEADER_FILE
#define HEADER_FILE

/******************** Header files *****************************/
#include <stddef.h>
#include <stdlib.h>

/******************* Prototypes ********************************/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
