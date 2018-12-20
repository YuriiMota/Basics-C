#include <stdio.h>
 
void twice(int n, int *p)
{
    for(int i=0; i<n; i++)
    {
        *p++ *= 2;
    }
}
int main(void)
{
    int nums[] = {1, 2, 3, 4, 5};
    int length = sizeof(nums)/sizeof(nums[0]);
     
    twice(length, nums);
     
    for(int i=0; i<length; i++)
    {
        printf("%d \t", nums[i]);
    }
	    return 0;
}