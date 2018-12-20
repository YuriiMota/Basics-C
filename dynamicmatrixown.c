#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int **table;    // вказівник для блоку памяті для масиву вказівників
    int rowscount;  // кількість рядків
    int colcount;      // кількість стовпців
     // ввід кількості рядків
    printf("Rows count=");
    scanf("%d", &rowscount);
	printf("Col count=");
    scanf("%d", &colcount);
	
	//int *mas=malloc(rowscount*colcount*sizeof(int));
	int mas[rowscount][colcount];	
	int **mass=mas;
	mass=malloc(rowscount*colcount*sizeof(int));
	for(int i=0;i<rowscount;i++)
	{
	//table[i]=calloc(colcount,sizeof(int));	
		for(int j=0;j<colcount;j++)
		{
			printf("Col [%d][%d]=",i,j);
			scanf("%d",&mas[i][j]);
		}
	
	}
	for(int i=0;i<rowscount;i++)
	{
		printf("\n");
		for(int j=0;j<colcount;j++)
		{
			printf("%d  ",mas[i][j]);
		}
		//free(table[i]);
		printf("\n");
	}
	free(mas);
	return 0;
}	