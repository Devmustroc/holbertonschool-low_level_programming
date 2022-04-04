#include <stdio.h>
#define SIZE    100
/**
 * _strlen - Function that return a length of a strings.
 * @i: counter.
 * len: length of String.
 * Retrun: return the length of a string.
 */
char *_strncat(char *s1, const char *s2, unsigned int n)
{
    if ((s1 == NULL) && (s2 == NULL))
    {
        return (NULL);
    }

    char *dest = s1; 
        while (*dest != '\0')
        {
            dest++;
        }
        while(n--)
        {
            if (!(*dest++ = *s2++))
            {
                return s1;
            }
        }
    *dest = '\0';
    return (s1);s
}