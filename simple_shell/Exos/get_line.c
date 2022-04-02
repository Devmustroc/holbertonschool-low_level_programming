#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
/**
 * _strlen -  Get the length of a string.
 * @s: pointer to s.
 * @i: counter.
 * Return: 0 success.
 */
int _strlen(char *s)
{
    int len = 0;
    int i;

    for (i = 0; s[i] != 0; i++)
    {
        len++;
    }
    return (len);
}
/**
 * _strwrite - print a string.
 * @str: pointer to string to print.
 * Return: nothing. 
 */
void _strwrite(char *str)
{
    write(1, str, _strlen(str));
}
/**
 * _getline - print "$ ", and wait for the user to inter a command, and prints it on the next line.
 * @input: pointer to buffer to store input.
 * @size: size of a buffer.
 * Return: chars read.
 */
int _getline(char *input, int size)
{
    int i;
    char start[2] = "$ ";

    write (STDOUT_FILENO, start, 2);
    for (i = 0; i < size - 1; i++)
    {
        read(STDIN_FILENO, (input + 1), 1);
        if (input[i] == '\n')
        {
            break;
        }
    }
    i++;
    input[i] = '\0';
    _strwrite(input);
    return (i);
}