#include <stdio.h>
 
union code
{
    int digit;
    char letter;
};
 
int main(void)
{
    union code id = {45};
    union code * p_id = &id;
	printf("%d \n", p_id);
	printf("%d \n", *p_id);
    printf("%d \n", p_id->digit);    // 45
    p_id->digit= 89;
    printf("%d \n", id.digit);      // 89
     
    return 0;
}