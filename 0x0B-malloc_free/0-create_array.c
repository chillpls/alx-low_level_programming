#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
        char *array = NULL;
        unsigned int i;

        if (size == 0)
                return (NULL);

        array = malloc(size * sizeof(char));
        if (array == NULL)
                return (NULL);

        for (i = 0; i < size; i++)
                array[i] = c;

        return (array);
}