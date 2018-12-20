#include <stdio.h>


int main(void)
{
int a=2;
int *p = &a;
int b = 5;
int *pb = p;
printf("%p %d\n",p,*p);
printf("%p %d\n",pb,*pb);
*p=25;
pb=p;

printf("N1= %p %d",pb,*pb);
}