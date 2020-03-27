include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main (void)
{
pid_t result;
result = fork ();
if (result == -1)
 {
fprintf (stderr, "Fork error\n");
return 1;
}
/* Child */
if (result == 0)
 {int fd = open("/bin/gedit",0);
fexecve (fd, "ls", NULL);
printf (stderr, "Exec error\n");
return 1;
}
/* Parent */
return 0;
}

