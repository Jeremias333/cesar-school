#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>

//int main(){
//	printf("Count: 0\n");
//	fork();
//	printf("Count: 1\n");
//	fork();
//	printf("Count: 2\n");
//	fork();
//	printf("Count: 3\n");
//	return 0;
//}

int main(){
	pid_t pid;
	pid = fork();
	if(pid == 0) {
		printf("Node son %d\n", pid);
		execlp("/bin/ls", "ls", "-la", NULL);
	}
	printf("Node father %d\n", pid);
	return 0;
}
