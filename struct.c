#include<stdio.h>

struct person
{
    int age;
    char * name;
} tom, bob, alice,tim;
 
int main(void)
{
	//struct person Tim={12,"Ololo"};
    tim.name ="Tom";
    tom.age = 23;
    bob.name ="Bob";
    bob.age = 15;
    alice.name = "Alice";
    alice.age=25;
    printf("Name:%s \t Age: %d", tim.name, tim.age);
    return 0;
}