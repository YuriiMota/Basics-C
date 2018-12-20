#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int *block=NULL; // вказівние для блоку памяті
	int n; // розщмірність масиву
	printf("Size of array");
	scanf("%d",&n);
	//block=malloc(n*sizeof(int));
	//block=calloc(n,sizeof(int));
	
	block=realloc(block,n*sizeof(int));
	for (int i = 0;i<n;i++)
	{
		printf("block[%d]=", i);
		scanf("%d",&block[i]);
	}
	printf("\n");
	for (int i = 0;i<n;i++)
	{
		printf("%d\t",block[i]);	
	}
	free(block);
	return 0;	
}
