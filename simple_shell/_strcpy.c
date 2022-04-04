#include <stdio.h>
/**
 * _stcpy - Function that copy a string.
 * @temp: String to copy.
 * @t: string to copy.
 * Retrun: string copied.
 */
char *_strcpy(char *t, const char *s)
{
    char *temp;
    temp = t;

    while (*s != '\0')
    {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
    return (temp);
}

/**
 * _strncpy - copy a string.
 * @dest: char.
 * @src: char
 * @n: int
 * Return: char.
 */
char *_strcnpy(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while (1 < n && *(src + i))
    {
        *(dest + i) = *(src + i);
        i++;
    }
    while (i < n)
    {
        *(dest + i) = '\0';
        i++;
    }
    return (dest);
}
