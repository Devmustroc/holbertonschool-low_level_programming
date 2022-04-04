#include <stdio.h>
#define SIZE    100
/**
 * _strlen - Function that return a length of a strings.
 * @i: counter.
 * len: length of String.
 * Retrun: return the length of a string.
 */
int _strlen(char *str)
{
    int len = 0;
    int i;

    for (i = 0; str[i] != 0; i++)
    {
        len++;
    }
    return (len);
}