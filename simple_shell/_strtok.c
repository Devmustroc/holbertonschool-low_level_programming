#include "main.h"
/**
 * check_delim - Check if a character match any char.
 * @c: Character to check.
 * @str: String to check.
 * Return: 1 succes, 0 failed.
 */
unsigned int check_delim(char c, const char *str)
{
    unsigned int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (c == str[i])
        {
            return (1);
        }
    }
    return (0);
}

/**
 * _strtok - Token a string into token (strtok)
 * @str: String.
 * @delim: Delimiter.
 * Return: pointer to the next token or NULL.
 */
char *_strtok(char *str, const char *delim)
{
    static char *st;
    static char *nt;
    unsigned int i;

    if (str != NULL)
    {
        nt = str;
    }
    st = nt;
    if (st == NULL)
    {
        return (NULL);
    }
    for (i = 0; st[i] != '\0'; i++)
    {
            if (check_delim(st[i], delim) == 0)
            {
                break;
            }    
    }
    if (nt[i] == '\0')
    {
        nt == NULL;
    }
    else
    {
        nt[i] = '\0';
        nt = nt + i + 1;
        if (*nt == '\0')
        {
            nt = NULL;
        }
        
    }
    return (st);
    
}


