#include <stdio.h>
 
int main(void)
{
    char name[20];
    puts("Enter name:");
     
    gets(name);
    printf("Your name: %s", name);
    return 0;
}