#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create array - creates an array of chars, and initializes it with a specific char
 * @size: size of the array
 * @c: character to be displayed
 * Return: return Null or pointer to array
 */

char *create_array(unsigned int size, char c)
{
    char *p = (char*) malloc(size*sizeof(char));
    if(size = 0)
    {
        return NULL;
        free(p);
    }
    if (p == NULL)
    {
        return (NULL);
        free(ptr);
        }
    for (int i = 0; i < size; i++)
    {
        *(p + 1) = c;
        return (p);
    }
    return (p);
    free(p);
}