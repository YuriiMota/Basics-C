#include<stdio.h>

#include <stdio.h>
 
#define PERSON struct {int age; char name[20];}
 
int main(void)
{
    PERSON tom = {23, "Tom"};
    printf("Name:%s \t Age: %d", tom.name, tom.age);
    return 0;
}