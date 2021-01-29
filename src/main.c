#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "resolve.h"

int main(int argc, char* argv[])
{
	if(argc < 2)
	{
		printf("Please provide a hostname to resolve");
		exit(1);
	}
	
	char* hostname = argv[1];
	char ip[100];

	resolve(hostname , ip);
	printf("%s resolved to %s" , hostname , ip);
	printf("\n");
}
