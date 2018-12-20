#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int *block=NULL; // вказівние для блоку памяті
	
	
	block=malloc((0));
	
		printf("%d\t\n",sizeof(block));	
		int i = sizeof(0);
	printf("%d\t",i);
	free(block);
	return 0;	
}