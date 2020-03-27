#include<sys/stat.h>
#include<fcntl.h>
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

extern char ** environ;

int main(int argc, char const *argv[])
{

    pid_t r;
	char * gedit_args[] = {
		"gedit",
		"file",
		NULL};

	int fd;
	r = fork();
	if(r==0){
        fd =open("/bin/gedit",O_RDONLY);
        if ( !fd ){
		printf( "Could not find path\n" );
		return -1;
	}
     if( fexecve(fd, gedit_args,environ) == -1){

         printf("Error%d\n",errno);
    }
  }
	sleep(600);
	return 0;
}
