#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main- PPID
 * 
 * Return: Always 0.
 */
int main(void)
{
    int pid = fork();
    int stats;

    if (pid == 0)
    {
        printf("this is the child process. MY pid is %d and my parent's id is %d.\n", getpid(), getppid());
    }
    else
    {
        wait(&stats);
        printf("This is the parent process. My pid is %d a,d my childs id is %d and my parent's pid is %d.\n", getpid(), pid, getppid());
    }
    return (0);
}