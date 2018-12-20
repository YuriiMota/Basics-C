#include <stdio.h>
 
union code
{
    int digit;
    char letter;
} id, d2;
 
int main(void)
{
    //union code id;
	seccode id;
    id.digit = 120;
    printf("%d - %c \n", id.digit, id.letter);  // 120 - x
    printf("%d - %d \n", id.digit, id.letter);  // 120 - 120
     
    id.letter = 87;
    printf("%d - %c \n", id.digit, id.letter);  // 87 - W
     
    return 0;
}