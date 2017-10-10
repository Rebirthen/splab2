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

	int child=4,i,c=0;
	pid_t pid[child];
	int arg1=atoi(argv[1]);
	int arg2=atoi(argv[2]);
	for(i=0;i<child;++i){
		if((pid[i] = fork())==-1)
			return(1);
		if(pid[i]==0){ switch(i){
			case 0:
				c=arg1+arg2;
				printf("child1: %d+%d=%d\n",arg1,arg2,c);
				break;
			case 1:
				c=arg1*arg2;
				printf("child2: %d*%d=%d\n",arg1,arg2,c);
				break;
			case 2:
				c=arg1-arg2;
				printf("child3: %d-%d=%d\n",arg1,arg2,c);
				break;
			case 3:
				c=arg1/arg2;
				printf("child4: %d/%d=%d\n",arg1,arg2,c);
				break;
			default:
				;}
			exit(0);}
		else if(pid[i]>0){wait(NULL);}}

	printf("Parent:job done!\n");
}
