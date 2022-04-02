#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example.
 * 
 * Return: Always 0.
 */
int main(void)
{
    pid_t mypid;
    pid_t child_pid;

    printf("before fork\n");
    child_pid = fork();
    if (child_pid == -1)
    {
       perror("Error:");
       return (1);
    }
    printf("After fork\n");
    mypid = getpid();
    printf("My pid is %u\n", mypid);
    if (child_pid == 0)
    {
        printf("(%u) Nooooooooo!\n", mypid);
    }
    else
    {
    printf("(%u) %u, I am your father\n", mypid, child_pid);
    }
    return (0);
}