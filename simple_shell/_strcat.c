#include <stdio.h>
/**
 * _strlen - Function that return a length of a strings.
 * @i: counter.
 * len: length of String.
 * Retrun: return the length of a string.
 */
char _strcat(char *str1, char *str2)
{
    char *start = str1;

    while (*str1 != '\0')
    {
        str1++;
    }

    while (str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 ='\0';
    return (start);
}