#include <stdio.h>
/**
 * main -  all the arguments, without using ac.
 * Return: 0 success.
 */
int main(int argc __attribute__ ((unused)), char * argv[])
{
    int i;

    for (i = 1; argv[i] != NULL; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}