#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<readline/readline.h>

int takeinput(char *str)
{
	char* buf;
	buf= readline("\n>> ");
	if (strlen(buf) !=0)
		return 0;
	return 1;
}

void printdir()
{
	char pwd[1024];
	getcwd(pwd, sizeof(pwd));
	printf("\nDir: %s", pwd);
}

void execargs(char **parsed)
{
	pid_t pid=fork();

	if (pid == -1)
	{
		fprintf(stderr, "Fork Failed\n");
		return;

	}
	else if(pid==0)
	{

		if (execvp(parsed[0], parsed) < 0)
		printf("\nCouldn't execute command");

		exit(0);
	}
	else
	{

		wait(NULL);
		return;
	}

}

int main()
{
	char inputString[1000], *parsedArgs[100];
	while(1)
	{
		printdir();
		if(takeinput(inputString))
			continue;

		execargs(parsedArgs);

	}
	return 0;
}
