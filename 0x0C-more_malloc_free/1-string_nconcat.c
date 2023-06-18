#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat: function that concatenates two strings
 * @s1: first input string
 * @s2: second input string
 * @n : bytes of second string that
 * Return new concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

{
	unsigned int a, b;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0' ; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	if (n > b)
		n = b;
	cat = malloc(((a + n) + 1));
	if (cat == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0' a++)
	{
		cat[a] = s1[a];
	}
	for (a = 0; b != n; b++)
	{
		cat[a] = s2[b];
		a++;
	}
	cat[a] = '\0';
	return (cat);
}

