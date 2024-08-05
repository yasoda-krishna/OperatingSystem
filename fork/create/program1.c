#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t cid;

	cid = fork();

	if(cid < 0)
	{
		printf("A fork error has occured.\n");
	}
	else
	{
		if(cid ==0)
		{
			printf("I am the child, about to call ps using execlp.\n");
			int err1 = execlp("/bin/ls","ls",(char *) 0);
			if(err1 <0)
			{
				printf("The call to execlp() was not successful.\n");
				exit(127);
			}

		}
		else
		{
			int err2 = wait(0);
			if(err2 < 0)
			{
				printf("There is a error occured in the child process");
			}
			printf("I am the parent. The child just ended. I will now exit.\n");
			exit(0);
		}
	}
	return (0);
}
