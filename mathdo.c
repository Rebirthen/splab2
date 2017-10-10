//name:Diana Temirkhan
//group:3eno4d

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){

	char *myargs[5];
	int child=4,i,c=0;
	pid_t pid[child];
	char* arg1=argv[1];
	char* arg2=argv[2];
	for(i=0;i<child;++i){
		if((pid[i] = fork())==-1)
		return(1);
		if(pid[i]==0){ switch(i){
		case 0:
			myargs[0]="python";
			myargs[1]="plus.py";
			myargs[2]=arg1;
			myargs[3]=arg2;
			myargs[4]=NULL;
			execvp(myargs[0],myargs);
			break;
		case 1:
			myargs[0]="java";
			myargs[1]="minus";
			myargs[2]=arg1;
			myargs[3]=arg2;
			myargs[4]=NULL;
			execvp(myargs[0],myargs);
			break;
		case 2:
			myargs[0]="node";
			myargs[1]="mul";
			myargs[2]=arg1;
			myargs[3]=arg2;
			myargs[4]=NULL;
			execvp(myargs[0],myargs);
			break;
		case 3:
			myargs[0]="bash";
			myargs[1]="div.sh";
			myargs[2]=arg1;
			myargs[3]=arg2;
			myargs[4]=NULL;
			execvp(myargs[0],myargs);			
			break;
			default:
				;}
		exit(0);}
		else if(pid[i]>0){wait(NULL);}}
	printf("Job done!\n");
}
