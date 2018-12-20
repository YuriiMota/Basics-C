#include <stdio.h>
#include <stdlib.h>

int main(void)
{

 int n;
 int m;
 int **mas;
 int *row;
 printf("Enter row count ");
 scanf("%d",&n);
 mas=calloc(n,sizeof(int*));
 row=malloc(n*sizeof(int));
 
 for(int i=0;i<n;i++)
 {
	printf("Enter count collumns row[i] "); 
	scanf("%d",&row[i]);
	mas[i]=malloc(row[i]*sizeof(int));
	for (int j=0;j<row[i];j++)
	{
		printf("Enter  elements [%d][%d] ",i,j); 
		scanf("%d",&mas[i][j]);
		
    }
 }
 printf("\n");
for(int i=0;i<n;i++)
{
	
	for (int j=0;j<row[i];j++)
	{
	printf("%d ",mas[i][j]); 
	}
	free(mas[i]);
	printf("\n");
}
free(mas);
free(row);
 return 0;
}	