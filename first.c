#include<stdio.h>

int main()
{
printf("PID: %d\n ",getpid());
printf("PPID: %d\n ",getppid());
sleep(30);
return 0;
}
