#include<stdio.h>
#include<stdlib.h>

int *p=NULL;

void createPointer()
{

	printf("%d \t", (*p));
    (*p)++;
}
int main (void)
{
	int n = 1;
     p = malloc(n * sizeof(int));
    *p = 1;
	
	createPointer();
    createPointer();
    createPointer();
	free(p);
	return 0;	
}
