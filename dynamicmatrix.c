#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **table;    // вказівник для блоку памяті для масиву вказівників
    int *rows;      // вказівник для блоку памяті по рядках
 
    int n;  // кількість рядків
    int m;      // число, що вводиться . відповдає за стовпці
     
    // ввід кількості рядків
    printf("Rows count=");
    scanf("%d", &n);
 
    // виділяємо память для двомірного масиву
    table = calloc(n, sizeof(int*));
    rows = malloc(n*sizeof(int));
    // цикл по рядках
    for (int i = 0; i<n; i++)
    {
        printf("\nColumns count for row %d=", i);
        scanf("%d", &rows[i]);
        table[i] = calloc(rows[i], sizeof(int));
 
        for (int j = 0; j<rows[i]; j++)
        {
            printf("table[%d][%d]=", i, j);
            scanf("%d", &m);
            table[i][j] = m;
        }
    }
    printf("\n");
 
    // вивід введених чисел на консоль
    for (int i = 0; i<n; i++)
    {
        printf("\n");
 
        for (int j = 0; j<rows[i]; j++)
        {
            printf("%d \t", table[i][j]);
        }
        // вивільнення памяті для одного рядка
        free(table[i]);
    }
     
    // вивільнення памяті
    free(table);
    free(rows);
 
    return 0;
}	