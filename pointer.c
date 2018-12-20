#include <stdio.h>
 
void increment(int *x)
{
    (*x)++;
    printf("increment function: %d \n", *x);
}
 
int main(void)
{
    int n = 10;
	int *p=&n;
    increment(p);
    printf("main function: %d \n", n);
    return 0;
}