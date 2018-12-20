#include<stdio.h>
#include<stdlib.h>

int *createPointer()
{
static int *p=NULL;
int n=1;
if (p==NULL)
{
	p=malloc(n*sizeof(int));
	*p=1;
}
	printf("%d \t", (*p));
    (*p)++;
	return p;
   // free(p);
}
int main (void)
{
	int *ptr;
	ptr=createPointer();
    ptr=createPointer();
    ptr=createPointer();
	free(ptr);
	return 0;	
}
